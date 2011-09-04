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
	generic(cp_size		: natural;
			  address_size : natural;
			  rsv_size 		: natural;
			  rte_size		: natural);
	port(
			clk				   : in std_logic;
			rst					: in std_logic;
			rsv_data_in			: in std_logic_vector (rsv_size-1 downto 0);
			rsv_data_out		: out std_logic_vector (rsv_size-1 downto 0);
			rte_data_in			: in std_logic_vector(rte_size-1 downto 0);
			rte_data_out		: out std_logic_vector(rte_size-1 downto 0);
			address				: out std_logic_vector (address_size-1 downto 0);
			rw						: out std_logic;
			rsv_en				: out std_logic;
			rte_en				: out std_logic;
			n_vc_deq 			: out  std_logic;
			n_vc_rnaSelI 		: out  std_logic_vector (1 downto 0);		 
			n_vc_rnaSelO 		: out  std_logic_vector (1 downto 0);		
			n_vc_rnaSelS		: out	std_logic_vector (1 downto 0);		
			n_vc_strq 			: out  std_logic;									
			n_vc_status 		: in std_logic_vector (1 downto 0);		
			e_vc_deq 			: out  std_logic;									
			e_vc_rnaSelI 		: out  std_logic_vector (1 downto 0);		
			e_vc_rnaSelO 		: out  std_logic_vector (1 downto 0);		 
			e_vc_rnaSelS		: out	std_logic_vector (1 downto 0);
			e_vc_strq 			: out std_logic;
			e_vc_status 		: in std_logic_vector (1 downto 0);
			s_vc_deq 			: out  std_logic;							
			s_vc_rnaSelI 		: out  std_logic_vector (1 downto 0); 
			s_vc_rnaSelO 		: out  std_logic_vector (1 downto 0); 
			s_vc_rnaSelS		: out	std_logic_vector (1 downto 0);
			s_vc_strq 			: out  std_logic;							
			s_vc_status 		: in std_logic_vector (1 downto 0);
			w_vc_deq 			: out  std_logic;
			w_vc_rnaSelI 		: out  std_logic_vector (1 downto 0); 
			w_vc_rnaSelO 		: out  std_logic_vector (1 downto 0); 
			w_vc_rnaSelS		: out	std_logic_vector (1 downto 0);
			w_vc_strq 			: out  std_logic;
			w_vc_status 		: in std_logic_vector (1 downto 0);
			n_NeighborCTRflg	: in std_logic;
			e_NeighborCTRflg	: in std_logic;
			s_NeighborCTRflg	: in std_logic;
			w_NeighborCTRflg	: in std_logic;
			n_CTRflg				: out std_logic;
			n_CtrlFlg			: in std_logic;
			n_rnaCtrl			: in std_logic_vector(cp_size-1 downto 0);
			e_CTRflg				: out std_logic;
			e_CtrlFlg			: in std_logic;
			e_rnaCtrl			: in std_logic_vector(cp_size-1 downto 0);
			s_CTRflg				: out std_logic;
			s_CtrlFlg			: in std_logic;
			s_rnaCtrl			: in std_logic_vector(cp_size-1 downto 0);
			w_CTRflg				: out std_logic;
			w_CtrlFlg			: in std_logic;
			w_rnaCtrl			: in std_logic_vector(cp_size-1 downto 0);
			sw_nSel				: out std_logic_vector(2 downto 0);
			sw_eSel				: out std_logic_vector(2 downto 0);
			sw_sSel				: out std_logic_vector(2 downto 0);
			sw_wSel				: out std_logic_vector(2 downto 0);
			sw_ejectSel			: out std_logic_vector(2 downto 0);
			sw_rnaCtFl			: in std_logic;
			rna_ctrlPkt			: out std_logic_vector(cp_size-1 downto 0);
			injt_ctrlPkt		: in std_logic_vector (cp_size-1 downto 0)
		);
end ControlUnit;

architecture Behavioral of ControlUnit is
	type state_type is (start, north, east, south, west, injection, timer_check, dp_arrivedOnNorth, 
							  dp_arrivedOnEast, dp_arrivedOnSouth, dp_arrivedOnWest);
	signal state, next_state : state_type;
	
	signal router_address 	: std_logic_vector(PID_WIDTH-1 downto 0) := "00000000";
	signal rsv_packet 		: std_logic_vector(rsv_size-1 downto 0) := "0000000000000000000";
	signal rsv_packet_info 	: std_logic_vector(rsv_size-1 downto 0) := "0000000000000000000";
	signal rte_packet			: std_logic_vector(rte_size-1 downto 0) := "0000";
	signal rte_packet_info	: std_logic_vector(rte_size-1 downto 0) := "0000";
	signal cp_packet			: std_logic_vector(cp_size-1 downto 0)	:= "00000000000000000000000000000000000000000000000000000000000000";
	signal globaltime			: std_logic_vector(31 downto 0) := "00000000000000000000000000000000";
	signal counter 			: std_logic_vector(31 downto 0) := "00000000000000000000000000000000";
	signal expires_in			: std_logic_vector(31 downto 0) := "00000000000000000000000000000000";
	signal timeunit1 			: std_logic_vector(15 downto 0) := "0000000000000000";
	signal timeunit2 			: std_logic_vector(15 downto 0) := "0000000000000000";
	signal w_address 			: std_logic_vector(address_size-1 downto 0) := "0000";
	signal r_address			: std_logic_vector(address_size-1 downto 0) := "0000";
	signal reserved_cnt		: std_logic_vector(address_size-1 downto 0) := "0000";
	signal index				: std_logic_vector(address_size-1 downto 0) := "0000";
	signal rsv_address		: std_logic_vector(address_size-1 downto 0) := "0000";
	signal rte_address		: std_logic_vector(address_size-1 downto 0) := "0000";
	signal next_pkt			: std_logic_vector(15 downto 0) := "0000000000000000";
	signal departingFromGate	: std_logic_vector(rte_size-1 downto 0) := "0000";
	signal start_timer 		: std_logic := '0';
	signal time_expired  	: std_logic := '0';
	signal addressChange 	: std_logic := '0';
	signal forwardPacket		: std_logic := '0';
	signal departurePacket	: std_logic := '0';
	signal table_full 		: std_logic := '0';
	signal rsv_strobe			: std_logic := '0';
	signal rte_strobe			: std_logic := '0';
	signal arrival				: std_logic := '0';
	signal departure			: std_logic := '0';
	signal forwardPkt_strobe : std_logic := '0';
	signal rsv_rw				: std_logic := '0';
	signal rte_rw				: std_logic := '0';
	signal updateWrite		: std_logic := '0';
	signal updateRead			: std_logic := '0';
	signal timer_control		: std_logic := '0';

	
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
	
	--cpStateHandler_process: These processes below are responsible for assigning the next_state

	process
	begin
		wait until rising_edge(clk);
		state <= next_state;
	end process;
	
	process(state)
	type schedule_type is array(0 to 2**address_size-1) of
		std_logic_vector(SCH_WIDTH-1 downto 0);
	variable schedule: schedule_type := 
	( "000000000000000000000000000000000000000000000000",
	  "000000000000000000000000000000000000000000000000",
	  "000000000000000000000000000000000000000000000000",
	  "000000000000000000000000000000000000000000000000",
	  "000000000000000000000000000000000000000000000000",
	  "000000000000000000000000000000000000000000000000",
	  "000000000000000000000000000000000000000000000000",
	  "000000000000000000000000000000000000000000000000",
	  "000000000000000000000000000000000000000000000000",
	  "000000000000000000000000000000000000000000000000",
	  "000000000000000000000000000000000000000000000000",
	  "000000000000000000000000000000000000000000000000",
	  "000000000000000000000000000000000000000000000000",
	  "000000000000000000000000000000000000000000000000",
	  "000000000000000000000000000000000000000000000000",
	  "000000000000000000000000000000000000000000000000");
	  
	type addresslut_type is array(0 to 2**address_size-1) of
		std_logic_vector(15 downto 0);
	variable address_lut: addresslut_type :=
	( "0000000000000000",
	  "0000000000000000",
	  "0000000000000000",
	  "0000000000000000",
	  "0000000000000000",
	  "0000000000000000",
	  "0000000000000000",
	  "0000000000000000",
	  "0000000000000000",
	  "0000000000000000",
	  "0000000000000000",
	  "0000000000000000",
	  "0000000000000000",
	  "0000000000000000",
	  "0000000000000000",
	  "0000000000000000");
	  
	variable sch_packet	: std_logic_vector(SCH_WIDTH-1 downto 0) :=  "000000000000000000000000000000000000000000000000";

	begin
		case state is
			when start =>
				next_state <= north;
			when north =>
				--Check flag
				if(n_CtrlFlg = '1') then
					if(n_rnaCtrl(10 downto 3) = router_address) then
						if(table_full = '0') then
							--Ack!
							n_CTRflg <= '1', '0' after 1 ns;
							--Write bits to rsv_packet
							rsv_packet <= n_rnaCtrl(29 downto 11);
							--Write bits to sch_packet
							schedule(conv_integer(w_address)) := n_rnaCtrl(29 downto 14) & (globaltime + n_rnaCtrl(cp_size-1 downto 30));
							--Store locally
							address_lut(conv_integer(w_address)) := n_rnaCtrl(29 downto 14);
							--Send to reservation table
							rsv_address <= w_address;
							rsv_rw <= '1';
							rsv_strobe <= '1', '0' after 1 ns;
						end if;
					else
						--Forward the Packet by checking routing table first
						cp_packet <= n_rnaCtrl;
						rte_address <= cp_packet(6 downto 3);
						rte_rw <= '0';
						forwardPacket <= '1';
						departurePacket <= '0';
						rte_strobe <= '1', '0' after 1 ns;
					end if;
				end if;
				next_state <= east;
			when east =>
				--Check flag
				if(e_CtrlFlg = '1') then
					if(e_rnaCtrl(10 downto 3) = router_address) then
						if(table_full = '0') then
							--Ack!
							e_CTRflg <= '1', '0' after 1 ns;
							--Write bits to rsv_packet
							rsv_packet <= e_rnaCtrl(29 downto 11);
							--Write bits to sch_packet
							schedule(conv_integer(w_address)) := e_rnaCtrl(29 downto 14) & (globaltime + e_rnaCtrl(cp_size-1 downto 30));
							--Send to reservation table
							rsv_address <= w_address;
							rsv_rw <= '1';
							rsv_strobe <= '1', '0' after 1 ns;
						end if;
					else
						--Forward the Packet
						cp_packet <= e_rnaCtrl;
						rte_address <= cp_packet(6 downto 3);
						rte_rw <= '0';
						forwardPacket <= '1';
						departurePacket <= '0';
						rte_strobe <= '1', '0' after 1 ns;
					end if;
				end if;
				next_state <= south;
			when south =>
				--Check flag
				if(s_CtrlFlg = '1') then
					if(s_rnaCtrl(10 downto 3) = router_address) then
						if(table_full = '0') then
							--Ack!
							s_CTRflg <= '1', '0' after 1 ns;
							--Write bits to rsv_packet
							rsv_packet <= s_rnaCtrl(29 downto 11);
							--Write bits to sch_packet
							schedule(conv_integer(w_address)) := s_rnaCtrl(29 downto 14) & (globaltime + s_rnaCtrl(cp_size-1 downto 30));
							--Send to reservation table
							rsv_address <= w_address;
							rsv_rw <= '1';
							rsv_strobe <= '1', '0' after 1 ns;
						end if;
					else
						--Forward the Packet
						cp_packet <= s_rnaCtrl;
						rte_address <= cp_packet(6 downto 3);
						rte_rw <= '0';
						forwardPacket <= '1';
						departurePacket <= '0';
						rte_strobe <= '1', '0' after 1 ns;
					end if;
				end if;
				next_state <= west;
			when west =>
				--Check flag
				if(w_CtrlFlg = '1') then
					if(w_rnaCtrl(10 downto 3) = router_address) then
						if(table_full = '0') then
							--Ack!
							w_CTRflg <= '1', '0' after 1 ns;
							--Write bits to rsv_packet
							rsv_packet <= w_rnaCtrl(29 downto 11);
							--Write bits to sch_packet
							schedule(conv_integer(w_address)) := w_rnaCtrl(29 downto 14) & (globaltime + w_rnaCtrl(cp_size-1 downto 30));
							--Send to reservation table
							rsv_address <= w_address;
							rsv_rw <= '1';
							rsv_strobe <= '1', '0' after 1 ns;
						end if;
					else
						--Forward the Packet
						cp_packet <= w_rnaCtrl;
						rte_address <= cp_packet(6 downto 3);
						rte_rw <= '0';
						forwardPacket <= '1';
						departurePacket <= '0';
						rte_strobe <= '1', '0' after 1 ns;
					end if;
				end if;
				next_state <= injection;
			when injection =>
				--Check flag
				if(sw_rnaCtFl = '1') then
					if(injt_ctrlPkt(10 downto 3) = router_address) then
						if(injt_ctrlPkt(2 downto 1) = "00") then		  		-- Condition: Normal Packet
							if(table_full = '0') then
								--Ack!
								n_CTRflg <= '1', '0' after 1 ns;
								--Write bits to rsv_packet
								rsv_packet <= injt_ctrlPkt(29 downto 11);
								--Write bits to sch_packet
								schedule(conv_integer(w_address)) := injt_ctrlPkt(29 downto 14) & (globaltime + injt_ctrlPkt(cp_size-1 downto 30));
								--Send to reservation table
								rsv_address <= w_address;
								rsv_rw <= '1';
								rsv_strobe <= '1', '0' after 1 ns;
							end if;
						elsif(injt_ctrlPkt(2 downto 1) = "01") then
							router_address <= injt_ctrlPkt(37 downto 30); 	-- Condition: PE is re/assigning addresses	
						elsif(injt_ctrlPkt(2 downto 1) = "10") then
							cp_packet <= injt_ctrlPkt;
							rte_address <= cp_packet(25 downto 22);
							rte_packet <= cp_packet(33 downto 30);
							rte_rw <= '1';
							forwardPacket <= '0';
							departurePacket <= '0';
							rte_strobe <= '1', '0' after 1 ns;					-- Condition: PE is updating Routing Table
						end if;
					else
						--Forward the Packet
						cp_packet <= injt_ctrlPkt;
						rte_address <= cp_packet(6 downto 3);
						rte_rw <= '0';
						forwardPacket <= '1';
						departurePacket <= '0';
						rte_strobe <= '1', '0' after 1 ns;
					end if;
				end if;
				next_state <= timer_check;
			when timer_check =>
				--Check scheduled job and determine if departure is necessary.
				if(r_address /= w_address and start_timer = '0') then
					--Grab time from scheduler
					sch_packet := schedule(conv_integer(r_address));
					expires_in <= sch_packet(31 downto 0);
					next_pkt <= sch_packet(47 downto 32);
					--Grab routing information right now for departure later.
					rte_address <= sch_packet(46 downto 43);
					rte_rw <= '0';
					forwardPacket <= '0';
					departurePacket <= '1';
					rte_strobe <= '1', '0' after 1 ns;
					timer_control <= '1', '0' after 1 ns;
				else
					timer_control <= '1', '0' after 1 ns;
				end if;
				
				next_state <= dp_arrivedOnNorth;
			when dp_arrivedOnNorth =>
				--Any new data packets?
				if(n_NeighborCTRflg = '1') then
					--for i in 0 to 15 loop
						--Look for GID/PID 
						--if()
					--end loop;
					rsv_address <= "0000";			--should be the address found above
					rsv_rw <= '0';
					rsv_strobe <= '1', '0' after 1 ns;
				end if;
				next_state <= dp_arrivedOnEast;
			when dp_arrivedOnEast =>
				--Any new data packets?
				if(e_NeighborCTRflg = '1') then
					--for i in 0 to 15 loop
						--Look for GID/PID 
						--if()
					--end loop;
					rsv_address <= "0000";			--should be the address found above
					rsv_rw <= '0';
					rsv_strobe <= '1', '0' after 1 ns;
				end if;
				next_state <= dp_arrivedOnSouth;
			when dp_arrivedOnSouth =>
				--Any new data packets?
				if(s_NeighborCTRflg = '1') then
					--for i in 0 to 15 loop
						--Look for GID/PID 
						--if()
					--end loop;
					rsv_address <= "0000";			--should be the address found above
					rsv_rw <= '0';
					rsv_strobe <= '1', '0' after 1 ns;
				end if;
				next_state <= dp_arrivedOnWest;
			when dp_arrivedOnWest =>
				--Any new data packets?
				if(w_NeighborCTRflg = '1') then
					--for i in 0 to 15 loop
						--Look for GID/PID 
						--if()
					--end loop;
					rsv_address <= "0000";			--should be the address found above
					rsv_rw <= '0';
					rsv_strobe <= '1', '0' after 1 ns;
				end if;
				next_state <= start;
			when others =>
				next_state <= start;
		end case;
	end process;
	
	cpAccessRsvRteTable_process: process(rsv_strobe, rte_strobe)
	begin
		if rsv_strobe = '1' then
			address <= rsv_address;		--rsv_address = w_address || index ("0000");
			rsv_data_out <= rsv_packet;
			rsv_packet_info <= rsv_data_in;
			rw <= rsv_rw;
			rsv_en <= '1', '0' after 1 ns;
			
			if rsv_rw = '1' then
				updateWrite <= '1', '0' after 1 ns;
			else
				arrival <= '1', '0' after 1 ns;
			end if;
		end if;
		
		if rte_strobe = '1' then
			address <= rte_address; 
			rte_data_out <= rte_packet;
			rte_packet_info <= rte_data_in;
			rw <= rte_rw;
			rte_en <= '1', '0' after 1 ns;
			
			if forwardPacket = '1' then
				forwardPkt_strobe <= '1', '0' after 1 ns;
			elsif departurePacket = '1' then
				departingFromGate <= rte_packet_info;
			end if;
		end if;
			
	end process;
	
	--cpSchedulerTimerControl_process: This is the process that determines if the scheduled time starts
	--											  or stops and begins the departure sequence of the packet.
	cpSchedulerTimerControl_process: process(timer_control)
	begin
		if timer_control'event and timer_control = '1' then
			if(r_address /= w_address and start_timer = '0') then
				start_timer <= '1';
			else
				if(time_expired = '1') then
					start_timer <= '0';
					--initiate departure
					departure <= '1', '0' after 1 ns;
				end if;
			end if;
		end if;
	end process;
	
	--cpUpdateCounters_process: This process is responsible for sending the next packet 
	--								out through the switch.	
	cpUpdateCounters_process: process(updateWrite, updateRead)
	begin
		if updateRead = '1' then
				--Update Counts and Check if the table has reached full capacity
				r_address <= r_address + 1;
				reserved_cnt <= reserved_cnt - 1;
		end if;
		
		if updateWrite = '1' then
				w_address <= w_address + 1;
				reserved_cnt <= reserved_cnt + 1;		
		end if;
		
		--Check table space
		if(reserved_cnt <= "1110") then
			table_full <= '0';
		else
			table_full <= '1';
		end if;
	end process;
	
	
	packetHandler_process: process(forwardPkt_strobe, departure, arrival)
	begin
		if forwardPkt_strobe = '1' then
			--Configure the switch
			--rte_packet_info
			sw_nSel <= "111";				--North Neighbor (use Control from Arbiter)
			
			--Write to rna_ctrlPkt
			rna_ctrlPkt <= cp_packet;
		end if;
		
		if departure = '1' then
			--Look up Routing Table (departingFromGate)
			--Grab PID/GID from next_pkt signal
			--Control VCC
			n_vc_rnaSelO <= "00";			-- "00" North FIFO 
			n_vc_deq <= '1', '0' after 1 ns;
			
			--Set Switch to move packet
			sw_nSel <= "001";					--North Neighbor (use Control from Arbiter)
			
			--Check CTR going high to low
			--wait until falling_edge(n_CTRflg);
			
			--Update Space in Reservation Table now that packet has departed
			updateRead <= '1', '0' after 1 ns;
		end if;
		
		if arrival = '1' then
			--Read RSV_TABLE
			--Control VCC
			n_vc_rnaSelI <= "00";			--Value from RSV TABLE (PATH)
	
			--Acknowledge? 
			--n_CTRflg <= '1', '0' after 1 ns;		(doesn't work)
		end if;
	end process;
	
end Behavioral;

