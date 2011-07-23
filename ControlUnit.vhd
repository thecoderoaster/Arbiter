----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:49:39 06/04/2011 
-- Design Name: 
-- Module Name:    ControlUnit - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
use work.router_library.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ControlUnit is
	generic(rsv_size		: natural;
			  address_size : natural;
			  pid_size 		: natural;
			  tid_size		: natural);
	port(
			clk				   : in std_logic;
			rst					: in std_logic;
			ram_data_in			: in std_logic_vector (pid_size-1 downto 0);
			ram_data_out		: out std_logic_vector (pid_size-1 downto 0);
			sch_data_in			: in std_logic_vector(tid_size-1 downto 0);
			sch_data_out		: out std_logic_vector(tid_size-1 downto 0);
			address				: out std_logic_vector (address_size-1 downto 0);
			rw						: out std_logic;
			ram_en				: out std_logic;
			sch_en				: out std_logic;
			n_vc_deq 			: in  std_logic;
			n_vc_rnaSelI 		: in  std_logic_vector (1 downto 0);		 
			n_vc_rnaSelO 		: in  std_logic_vector (1 downto 0);		
			n_vc_rnaSelS		: in	std_logic_vector (1 downto 0);		
			n_vc_strq 			: in  std_logic;									
			n_vc_status 		: out std_logic_vector (1 downto 0);		
			e_vc_deq 			: in  std_logic;									
			e_vc_rnaSelI 		: in  std_logic_vector (1 downto 0);		
			e_vc_rnaSelO 		: in  std_logic_vector (1 downto 0);		 
			e_vc_rnaSelS		: in	std_logic_vector (1 downto 0);
			e_vc_strq 			: in  std_logic;
			e_vc_status 		: out std_logic_vector (1 downto 0);
			s_vc_deq 			: in  std_logic;							
			s_vc_rnaSelI 		: in  std_logic_vector (1 downto 0); 
			s_vc_rnaSelO 		: in  std_logic_vector (1 downto 0); 
			s_vc_rnaSelS		: in	std_logic_vector (1 downto 0);
			s_vc_strq 			: in  std_logic;							
			s_vc_status 		: out std_logic_vector (1 downto 0);
			w_vc_deq 			: in  std_logic;
			w_vc_rnaSelI 		: in  std_logic_vector (1 downto 0); 
			w_vc_rnaSelO 		: in  std_logic_vector (1 downto 0); 
			w_vc_rnaSelS		: in	std_logic_vector (1 downto 0);
			w_vc_strq 			: in  std_logic;
			w_vc_status 		: out std_logic_vector (1 downto 0);
			n_CTRflg				: out std_logic;
			n_CtrlFlg			: in std_logic;
			n_rnaCtrl			: in std_logic_vector(rsv_size-1 downto 0);
			e_CTRflg				: out std_logic;
			e_CtrlFlg			: in std_logic;
			e_rnaCtrl			: in std_logic_vector(rsv_size-1 downto 0);
			s_CTRflg				: out std_logic;
			s_CtrlFlg			: in std_logic;
			s_rnaCtrl			: in std_logic_vector(rsv_size-1 downto 0);
			w_CTRflg				: out std_logic;
			w_CtrlFlg			: in std_logic;
			w_rnaCtrl			: in std_logic_vector(rsv_size-1 downto 0);
			sw_nSel				: out std_logic_vector(2 downto 0);
			sw_eSel				: out std_logic_vector(2 downto 0);
			sw_sSel				: out std_logic_vector(2 downto 0);
			sw_wSel				: out std_logic_vector(2 downto 0);
			sw_ejectSel			: out std_logic_vector(2 downto 0);
			sw_rnaCtFl			: in std_logic;
			rna_ctrlPkt			: out std_logic_vector(rsv_size-1 downto 0);
			injt_ctrlPkt		: in std_logic_vector (rsv_size-1 downto 0)
		);
end ControlUnit;

architecture Behavioral of ControlUnit is
	type state_type is (start, north, east, south, west, injection, check1, check2);
	signal state, next_state : state_type;
	
	signal pid_packet 	: std_logic_vector(pid_size-1 downto 0) := "0000000000000000";
	signal tid_packet		: std_logic_vector(tid_size-1 downto 0) := "00000000000000000000000000000000";
	signal globaltime		: std_logic_vector(31 downto 0) := "00000000000000000000000000000000";
	signal counter 		: std_logic_vector(tid_size-1 downto 0) := "00000000000000000000000000000000";
	signal expires_in		: std_logic_vector(tid_size-1 downto 0) := "00000000000000000000000000000000";
	signal timeunit1 		: std_logic_vector(15 downto 0) := "0000000000000000";
	signal timeunit2 		: std_logic_vector(15 downto 0) := "0000000000000000";
	signal w_address 		: std_logic_vector(address_size-1 downto 0) := "0000";
	signal r_address		: std_logic_vector(address_size-1 downto 0) := "0000";
	signal reserved_cnt	: std_logic_vector(address_size-1 downto 0) := "0000";
	signal next_pid		: std_logic_vector(pid_size-1 downto 0) := "0000000000000000";
	signal start_timer 	: std_logic := '0';
	signal time_expired  : std_logic := '0';
	signal departure		: std_logic := '0';
	signal table_full 	: std_logic := '0';
	signal strobe_r		: std_logic := '0';
	signal strobe_w		: std_logic := '0';

	
begin

	--globaltimer_process: This is the running timer (indefinitely)
	globaltimer_process: process(clk, rst)
	begin
		
		if rst = '1' then
			globaltime <= "00000000000000000000000000000000";
			timeunit1 <= "0000000000000000" after 1 ns;
		
		elsif rising_edge(clk) then
			timeunit1 <= timeunit1 + "0000000000000001";
			if(timeunit1 = "000000111110") then
				globaltime <= globaltime + "00000000000000000000000000000001";
				timeunit1 <= "0000000000000000";
			end if;
		end if;
	end process;


	--timebase_process: 	Creates a "stopwatch" for establishing a timebase that
	--							the packet transfers process requires to ensure QoS.
	timebase_process: process(clk, rst)
	begin
	
		if rst = '1' then
			counter <= "00000000000000000000000000000000";
			time_expired <= '0';
			timeunit2 <= "0000000000000000" after 1 ns;
			
		elsif rising_edge(clk) then
			if(start_timer = '1' and time_expired = '0') then
				timeunit2 <= timeunit2 + "0000000000000001";
				time_expired <= '0';
				if(timeunit2 = "0000000000000110") then								-- was 1000 cycles 0000000000111110
					counter <= counter + "00000000000000000000000000000001";		--increment the counter by 1 tick
					if(counter = expires_in) then
						counter <= "00000000000000000000000000000000";
						time_expired <= '1';
					end if;
					timeunit2 <= "0000000000000000";
				end if;
			elsif(start_timer = '0' and time_expired = '1') then
				time_expired <= '0';
			end if;
		end if;
	end process;
	
	--cpStateHandler_process: This process is responsible for assigning the next_state

	process
	begin
		wait until rising_edge(clk);
		state <= next_state;
	end process;
	
	process(state)
	begin
		case state is
			when start =>
				next_state <= north;
			when north =>
				--Check flag
				if(n_CtrlFlg = '1' and table_full = '0') then
					--Ack!
					n_CTRflg <= '1', '0' after 1 ns;
					--Write bits to pid_packet
					pid_packet <= n_rnaCtrl(15 downto 0);
					--Write bits to tid_packet
					tid_packet <= globaltime + n_rnaCtrl(rsv_size-1 downto 16);
					--Send to memory
					strobe_w <= '1', '0' after 1 ns;
					--Pass the packet
					rna_ctrlPkt <= n_rnaCtrl;
					sw_nSel <= "111";
				elsif(n_CtrlFlg = '1' and table_full = '1') then
					--Forward the packet
					rna_ctrlPkt <= n_rnaCtrl;
					sw_nSel <= "111";
				end if;
				next_state <= east;
			when east =>
				--Check flag
				if(e_CtrlFlg = '1' and table_full = '0') then
					--Ack!
					e_CTRflg <= '1', '0' after 1 ns;
					--Write bits to pid_packet
					pid_packet <= e_rnaCtrl(15 downto 0);
					--Write bits to tid_packet
					tid_packet <= globaltime + e_rnaCtrl(rsv_size-1 downto 16);
					--Send to memory
					strobe_w <= '1', '0' after 1 ns;
					--Pass the packet
					rna_ctrlPkt <= e_rnaCtrl;
					sw_eSel <= "111";
				elsif(e_CtrlFlg = '1' and table_full = '1') then
					--Forward the packet
					rna_ctrlPkt <= e_rnaCtrl;
					sw_eSel <= "111";
				end if;
				next_state <= south;
			when south =>
				--Check flag
				if(s_CtrlFlg = '1' and table_full = '0') then
					--Ack!
					s_CTRflg <= '1', '0' after 1 ns;
					--Write bits to pid_packet
					pid_packet <= s_rnaCtrl(15 downto 0);
					--Write bits to tid_packet
					tid_packet <= globaltime + s_rnaCtrl(rsv_size-1 downto 16);
					--Send to memory
					strobe_w <= '1', '0' after 1 ns;
					--Pass the packet
					rna_ctrlPkt <= s_rnaCtrl;
					sw_sSel <= "111";
				elsif(s_CtrlFlg = '1' and table_full = '1') then
					--Forward the packet
					rna_ctrlPkt <= s_rnaCtrl;
					sw_sSel <= "111";
				end if;
				next_state <= west;
			when west =>
				--Check flag
				if(w_CtrlFlg = '1' and table_full = '0') then
					--Ack!
					w_CTRflg <= '1', '0' after 1 ns;
					--Write bits to pid_packet
					pid_packet <= w_rnaCtrl(15 downto 0);
					--Write bits to tid_packet
					tid_packet <= globaltime + w_rnaCtrl(rsv_size-1 downto 16);
					--Send to memory
					strobe_w <= '1', '0' after 1 ns;
					--Pass the packet
					rna_ctrlPkt <= w_rnaCtrl;
					sw_wSel <= "111";
				elsif(w_CtrlFlg = '1' and table_full = '1') then
					--Forward the packet
					rna_ctrlPkt <= w_rnaCtrl;
					sw_wSel <= "111";
				end if;
				next_state <= injection;
			when injection =>
				--Check flag
				if(sw_rnaCtFl = '1' and table_full = '0') then
					--Write bits to pid_packet
					pid_packet <= injt_ctrlPkt(15 downto 0);
					--Write bits to tid_packet
					tid_packet <= globaltime + injt_ctrlPkt(rsv_size-1 downto 16);
					--Send to memory
					strobe_w <= '1', '0' after 1 ns;
					--Pass the packet
					rna_ctrlPkt <= injt_ctrlPkt;
					sw_nSel <= "101";
				elsif(sw_rnaCtFl = '1' and table_full = '1') then
					--Forward the packet
					rna_ctrlPkt <= injt_ctrlPkt;
					sw_nSel <= "101";
				end if;
				next_state <= check1;
			when check1 =>
				--Initiate timer here?
				if(r_address /= w_address and start_timer = '0') then
					strobe_r <= '1', '0' after 1 ns;
					next_state <= check2;
				elsif(r_address /= w_address and start_timer = '1') then
					strobe_r <= '1', '0' after 1 ns;
					next_state <= start;
				elsif(r_address = w_address and start_timer = '1') then
					strobe_r <= '1', '0' after 1 ns;
					next_state <= start;
				else
					next_state <= start;
				end if;
			when check2 =>
				--Grab time from scheduler
				expires_in <= sch_data_in after 1 ns;
				next_pid <= ram_data_in after 1 ns;
				next_state <= start;
			when others =>
				next_state <= start;
		end case;
	end process;
	
	process(strobe_r, strobe_w)
	begin
		if(strobe_w = '1') then
				address <= w_address;
				sch_data_out <= tid_packet;
				rw <= '1';
				sch_en <= '1', '0' after 1 ns;
				ram_data_out <= pid_packet;
				ram_en <= '1', '0' after 1 ns;
				rw <= '1';
				w_address <= w_address + 1;
				reserved_cnt <= reserved_cnt + 1;
				if(reserved_cnt = "1110") then
					table_full <= '1';
				else
					table_full <= '0';
				end if;
			
		elsif(strobe_r = '1') then
			if(r_address /= w_address and start_timer = '0') then
				address <= r_address;
				rw <= '0';
				sch_en <= '1', '0' after 1 ns;
				ram_en <= '1', '0' after 1 ns;
				r_address <= r_address + 1;
				reserved_cnt <= reserved_cnt - 1;
				start_timer <= '1';
			elsif(r_address /= w_address and start_timer = '1') then
				if(time_expired = '1') then
					start_timer <= '0';
					--initiate departure
					departure <= '1', '0' after 1 ns;
				end if;
			elsif(r_address = w_address and start_timer = '1') then
				if(time_expired = '1') then
					start_timer <= '0';
					--initiate departure
					departure <= '1', '0' after 1 ns;
				end if;
			end if;	
		end if;
	end process;
	
	--dpDeparture_process: This process is responsible for sending the next packet out.
	dpDeparture_process: process(departure)
	begin
		if rising_edge(departure) then
			--Grab PID/GID from next_pid signal
			--Control VCC
			--Set Switch to move packet
		end if;
	end process;
end Behavioral;

