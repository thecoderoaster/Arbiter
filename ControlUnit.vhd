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
	type state_type is (start, north1, north2, north3, north4, north5, north6, north7,
							  east1, east2, east3, east4, east5, east6, east7,
							  south1, south2, south3, south4, south5, south6, south7,
							  west1, west2, west3, west4, west5, west6, west7,
							  injection1, injection2, injection3, injection4, injection5,
							  injection6, injection7, injection8, injection9, injection10,
							  timer_check1, timer_check2, timer_check3, timer_check4,
							  departure1,
							  dp_arrivedOnNorth1, dp_arrivedOnNorth2, dp_arrivedOnNorth3,
							  dp_arrivedOnEast1, dp_arrivedOnEast2, dp_arrivedOnEast3,
							  dp_arrivedOnSouth1, dp_arrivedOnSouth2, dp_arrivedOnSouth3,
							  dp_arrivedOnWest1, dp_arrivedOnWest2, dp_arrivedOnWest3);   --56 State FSM
	signal state, next_state : state_type;
	
	signal router_address 	: std_logic_vector(PID_WIDTH-1 downto 0) := "00000000";

	--Timer Related Signals
	signal globaltime			: std_logic_vector(31 downto 0) := "00000000000000000000000000000000";
	signal counter 			: std_logic_vector(31 downto 0) := "00000000000000000000000000000000";
	signal timeunit1 			: std_logic_vector(15 downto 0) := "0000000000000000";
	signal timeunit2 			: std_logic_vector(15 downto 0) := "0000000000000000";
	signal start_timer 		: std_logic := '0';
	signal time_expired  	: std_logic := '0';
		
	--Departure Itinerary
	signal next_pkt_to_depart				: std_logic_vector(15 downto 0) := "0000000000000000";
	signal next_pkt_departing_from_gate	: std_logic_vector(rte_size-1 downto 0) := "0000";
	signal next_pkt_expires_in				: std_logic_vector(31 downto 0) := "00000000000000000000000000000000";

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
					if(counter = next_pkt_expires_in) then
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
	( "00000000000000000000000000000000000000000000000000000000",
	  "00000000000000000000000000000000000000000000000000000000",
	  "00000000000000000000000000000000000000000000000000000000",
	  "00000000000000000000000000000000000000000000000000000000",
	  "00000000000000000000000000000000000000000000000000000000",
	  "00000000000000000000000000000000000000000000000000000000",
	  "00000000000000000000000000000000000000000000000000000000",
	  "00000000000000000000000000000000000000000000000000000000",
	  "00000000000000000000000000000000000000000000000000000000",
	  "00000000000000000000000000000000000000000000000000000000",
	  "00000000000000000000000000000000000000000000000000000000",
	  "00000000000000000000000000000000000000000000000000000000",
	  "00000000000000000000000000000000000000000000000000000000",
	  "00000000000000000000000000000000000000000000000000000000",
	  "00000000000000000000000000000000000000000000000000000000",
	  "00000000000000000000000000000000000000000000000000000000");
	  
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
	  
	variable sch_packet	: std_logic_vector(SCH_WIDTH-1 downto 0) :=  "00000000000000000000000000000000000000000000000000000000";
	--Memory Related Variables (Routing/Reservation/Scheduler)
	variable w_address 			: std_logic_vector(address_size-1 downto 0) := "0000";
	variable r_address			: std_logic_vector(address_size-1 downto 0) := "0000";
	variable reserved_cnt		: std_logic_vector(address_size-1 downto 0) := "0000";
	variable table_full 			: std_logic := '0';

	begin
		case state is
			when start =>
				next_state <= north1;
--*NORTH*--
			when north1 =>
				--Check flag
				if(n_CtrlFlg = '1') then
					next_state <= north2;
				else
					next_state <= east1;
				end if;
			when north2 =>
				if(n_rnaCtrl(10 downto 3) = router_address) then
					next_state <= north3;	--It's for me!
				else
					next_state <= north4;	--Forward the control packet.
				end if;
			when north3 =>
				if(table_full = '0') then
					next_state <= north5;
				else
					next_state <= east1;
				end if;
			when north4 =>
				--Forward the Packet by checking routing table first
				address <= n_rnaCtrl(6 downto 3);
				rw <= '0';
				rte_en <= '1', '0' after 1 ns;	
				next_state <= north6;
			when north5 =>	
				--Reserve and schedule the incoming control packet
				--Ack!
				n_CTRflg <= '1', '0' after 1 ns;
				--Write bits to rsv_data_out
				rsv_data_out <= n_rnaCtrl(29 downto 11);
				--Write bits to sch_packet
				schedule(conv_integer(w_address)) := n_rnaCtrl(29 downto 14) & n_rnaCtrl(10 downto 3) & (globaltime + n_rnaCtrl(cp_size-1 downto 30));
				--Store locally
				address_lut(conv_integer(w_address)) := n_rnaCtrl(29 downto 14);
				--Send to reservation table
				address <= w_address;
				rw <= '1';
				rsv_en <= '1', '0' after 1 ns;
				next_state <= north7;
			when north6 =>
				--Configure the switch
				sw_nSel <= rte_data_in(3 downto 1);				--North Neighbor (use Control from Arbiter)
				--Write to rna_ctrlPkt
				rna_ctrlPkt <= n_rnaCtrl;
				next_state <= east1;
			when north7 =>
				w_address := w_address + 1;
				reserved_cnt := reserved_cnt + 1;
				
				--Check table space
				if(reserved_cnt <= "1110") then
					table_full := '0';
				else
					table_full := '1';
				end if;
				next_state <= east1;
--*EAST*--				
			when east1 =>
				--Check flag
				if(e_CtrlFlg = '1') then
					next_state <= east2;
				else
					next_state <= south1;
				end if;
			when east2 =>
				if(e_rnaCtrl(10 downto 3) = router_address) then
					next_state <= east3;	--It's for me!
				else
					next_state <= east4;	--Forward the control packet.
				end if;
			when east3 =>
				if(table_full = '0') then
					next_state <= east5;
				else
					next_state <= south1;
				end if;
			when east4 =>
				--Forward the Packet by checking routing table first
				address <= e_rnaCtrl(6 downto 3);
				rw <= '0';
				rte_en <= '1', '0' after 1 ns;	
				next_state <= east6;
			when east5 =>	
				--Reserve and schedule the incoming control packet
				--Ack!
				e_CTRflg <= '1', '0' after 1 ns;
				--Write bits to rsv_data_out
				rsv_data_out <= e_rnaCtrl(29 downto 11);
				--Write bits to sch_packet
				schedule(conv_integer(w_address)) := e_rnaCtrl(29 downto 14) & e_rnaCtrl(10 downto 3) & (globaltime + e_rnaCtrl(cp_size-1 downto 30));
				--Store locally
				address_lut(conv_integer(w_address)) := e_rnaCtrl(29 downto 14);
				--Send to reservation table
				address <= w_address;
				rw <= '1';
				rsv_en <= '1', '0' after 1 ns;
				next_state <= east7;
			when east6 =>
				--Configure the switch
				sw_nSel <= rte_data_in(3 downto 1);				--North Neighbor (use Control from Arbiter)
				--Write to rna_ctrlPkt
				rna_ctrlPkt <= e_rnaCtrl;
				next_state <= south1;
			when east7 =>
				w_address := w_address + 1;
				reserved_cnt := reserved_cnt + 1;
				
				--Check table space
				if(reserved_cnt <= "1110") then
					table_full := '0';
				else
					table_full := '1';
				end if;
				next_state <= south1;	
--*SOUTH*--
			when south1 =>
				--Check flag
				if(s_CtrlFlg = '1') then
					next_state <= south2;
				else
					next_state <= west1;
				end if;
			when south2 =>
				if(s_rnaCtrl(10 downto 3) = router_address) then
					next_state <= south3;	--It's for me!
				else
					next_state <= south4;	--Forward the control packet.
				end if;
			when south3 =>
				if(table_full = '0') then
					next_state <= south5;
				else
					next_state <= west1;
				end if;
			when south4 =>
				--Forward the Packet by checking routing table first
				address <= s_rnaCtrl(6 downto 3);
				rw <= '0';
				rte_en <= '1', '0' after 1 ns;	
				next_state <= south6;
			when south5 =>	
				--Reserve and schedule the incoming control packet
				--Ack!
				s_CTRflg <= '1', '0' after 1 ns;
				--Write bits to rsv_data_out
				rsv_data_out <= s_rnaCtrl(29 downto 11);
				--Write bits to sch_packet
				schedule(conv_integer(w_address)) := s_rnaCtrl(29 downto 14) & s_rnaCtrl(10 downto 3) & (globaltime + s_rnaCtrl(cp_size-1 downto 30));
				--Store locally
				address_lut(conv_integer(w_address)) := s_rnaCtrl(29 downto 14);
				--Send to reservation table
				address <= w_address;
				rw <= '1';
				rsv_en <= '1', '0' after 1 ns;
				next_state <= south7;
			when south6 =>
				--Configure the switch
				sw_nSel <= rte_data_in(3 downto 1);				--North Neighbor (use Control from Arbiter)
				--Write to rna_ctrlPkt
				rna_ctrlPkt <= s_rnaCtrl;
				next_state <= west1;
			when south7 =>
				w_address := w_address + 1;
				reserved_cnt := reserved_cnt + 1;
				
				--Check table space
				if(reserved_cnt <= "1110") then
					table_full := '0';
				else
					table_full := '1';
				end if;
				next_state <= west1;	
--*WEST*--
			when west1 =>
				--Check flag
				if(w_CtrlFlg = '1') then
					next_state <= west2;
				else
					next_state <= injection1;
				end if;
			when west2 =>
				if(w_rnaCtrl(10 downto 3) = router_address) then
					next_state <= west3;	--It's for me!
				else
					next_state <= west4;	--Forward the control packet.
				end if;
			when west3 =>
				if(table_full = '0') then
					next_state <= west5;
				else
					next_state <= injection1;
				end if;
			when west4 =>
				--Forward the Packet by checking routing table first
				address <= w_rnaCtrl(6 downto 3);
				rw <= '0';
				rte_en <= '1', '0' after 1 ns;	
				next_state <= west6;
			when west5 =>	
				--Reserve and schedule the incoming control packet
				--Ack!
				w_CTRflg <= '1', '0' after 1 ns;
				--Write bits to rsv_data_out
				rsv_data_out <= w_rnaCtrl(29 downto 11);
				--Write bits to sch_packet
				schedule(conv_integer(w_address)) := w_rnaCtrl(29 downto 14) & w_rnaCtrl(10 downto 3) & (globaltime + w_rnaCtrl(cp_size-1 downto 30));
				--Store locally
				address_lut(conv_integer(w_address)) := w_rnaCtrl(29 downto 14);
				--Send to reservation table
				address <= w_address;
				rw <= '1';
				rsv_en <= '1', '0' after 1 ns;
				next_state <= west7;
			when west6 =>
				--Configure the switch
				sw_nSel <= rte_data_in(3 downto 1);				--North Neighbor (use Control from Arbiter)
				--Write to rna_ctrlPkt
				rna_ctrlPkt <= w_rnaCtrl;
				next_state <= injection1;
			when west7 =>
				w_address := w_address + 1;
				reserved_cnt := reserved_cnt + 1;
				
				--Check table space
				if(reserved_cnt <= "1110") then
					table_full := '0';
				else
					table_full := '1';
				end if;
				next_state <= injection1;
--*INJECTION*--
			when injection1 =>
				--Check flag
				if(sw_rnaCtFl = '1') then
					next_state <= injection2;
				else
					next_state <= timer_check1;
				end if;
			when injection2 =>
				if(injt_ctrlPkt(10 downto 3) = router_address) then
					next_state <= injection3;	--It's for me!
				else
					next_state <= injection7;	--Forward the control packet.
				end if;
			when injection3 =>
				case injt_ctrlPkt(2 downto 1) is
					when "00" =>
						next_state <= injection4;	-- Condition: Normal Packet
					when "01" =>
						next_state <= injection5;	-- Condition: PE is re/assigning addresses
					when "10" =>
						next_state <= injection6;	-- Condition: PE is updating Routing Table
					when others =>
						next_state <= timer_check1;	-- Condition: Unknown, move to next state.
				end case;
			when injection4 =>
				if(table_full = '0') then
					next_state <= injection8;
				else
					next_state <= timer_check1;
				end if;
			when injection5 =>
				router_address <= injt_ctrlPkt(37 downto 30);
				next_state <= timer_check1;
			when injection6 =>
				address <= injt_ctrlPkt(25 downto 22);
				rte_data_out <= injt_ctrlPkt(33 downto 30);
				rw <= '1';
				rte_en <= '1', '0' after 1 ns;	
				next_state <= timer_check1;
			when injection7 =>
				--Forward the Packet by checking routing table first
				address <= injt_ctrlPkt(6 downto 3);
				rw <= '0';
				rte_en <= '1', '0' after 1 ns;	
				next_state <= injection9;
			when injection8 =>	
				--Reserve and schedule the incoming control packet
				--Ack!
				--Write bits to rsv_data_out
				rsv_data_out <= injt_ctrlPkt(29 downto 11);
				--Write bits to sch_packet
				schedule(conv_integer(w_address)) := injt_ctrlPkt(29 downto 14) & injt_ctrlPkt(10 downto 3) & (globaltime + injt_ctrlPkt(cp_size-1 downto 30));
				--Store locally
				address_lut(conv_integer(w_address)) := injt_ctrlPkt(29 downto 14);
				--Send to reservation table
				address <= w_address;
				rw <= '1';
				rsv_en <= '1', '0' after 1 ns;
				next_state <= injection10;
			when injection9 =>
				--Configure the switch
				sw_nSel <= rte_data_in(3 downto 1);				--North Neighbor (use Control from Arbiter)
				--Write to rna_ctrlPkt
				rna_ctrlPkt <= injt_ctrlPkt;
				next_state <= timer_check1;
			when injection10 =>
				w_address := w_address + 1;
				reserved_cnt := reserved_cnt + 1;
				
				--Check table space
				if(reserved_cnt <= "1110") then
					table_full := '0';
				else
					table_full := '1';
				end if;
				next_state <= timer_check1;	
--*TIMER_CHECK*--
			when timer_check1 =>
				--Check scheduled job and determine if departure is necessary.
				if(r_address /= w_address and start_timer = '0') then
					next_state <= timer_check2;
				else
					next_state <= timer_check4;
				end if;
			when timer_check2 =>
					--Grab time from scheduler
					sch_packet := schedule(conv_integer(r_address));
					next_pkt_to_depart <= sch_packet(55 downto 40);
					next_pkt_expires_in <= sch_packet(31 downto 0);
					
					--Grab routing information.
					address <= sch_packet(35 downto 32);	-- Only doing a max of 16 nodes in network for now
					rw <= '0';
					rte_en <= '1', '0' after 1 ns;
					next_state <= timer_check3;
			when timer_check3 =>
					next_pkt_departing_from_gate <= rte_data_in(3 downto 0);
					start_timer <= '1';
					next_state <= dp_arrivedOnNorth1;
			when timer_check4 =>
					if(time_expired = '1') then
						start_timer <= '0';
						next_state <= departure1;
					else
						next_state <= dp_arrivedOnNorth1;
					end if;
--*DEPARTURE*--
			when departure1 =>
				--Use the routing table info saved in next_pkt_departing_from_gate	
				--Grab PID/GID from next_pkt_to_depart signal
				
				--Control VCC
				n_vc_rnaSelO <= "00";			-- "00" North FIFO 
				n_vc_deq <= '1', '0' after 1 ns;
				
				--Set Switch to move packet
				sw_nSel <= "001";					--North Neighbor (use Control from Arbiter)
				
				--Check CTR going high to low
				--wait until falling_edge(n_CTRflg);
				
				--Update Space in Reservation Table now that packet has departed
				r_address := r_address + 1;
				reserved_cnt := reserved_cnt - 1;
				
				--Check table space
				if(reserved_cnt <= "1110") then
					table_full := '0';
				else
					table_full := '1';
				end if;
				next_state <= dp_arrivedOnNorth1;
--*NORTH ARRIVALS*--
			when dp_arrivedOnNorth1 =>
				--Any new data packets?
				if(n_NeighborCTRflg = '1') then
					next_state <= dp_arrivedOnNorth2;
				else
					next_state <= dp_arrivedOnEast1;
				end if;
			when dp_arrivedOnNorth2 =>
					--for i in 0 to 15 loop
						--Look for GID/PID 
						--if()
					--end loop;
					address <= "0000";			--should be the address found above
					rw <= '0';
					rsv_en <= '1', '0' after 1 ns;
					next_state <= dp_arrivedOnNorth3;
			when dp_arrivedOnNorth3 =>
					--Read RSV_TABLE
					--Control VCC
					n_vc_rnaSelI <= "00";			--Value from RSV TABLE (PATH) rsv_data_in
	
					--Acknowledge? 
					n_CTRflg <= '1', '0' after 1 ns;
					next_state <= dp_arrivedOnEast1;
--*EAST ARRIVALS*--
			when dp_arrivedOnEast1 =>
				--Any new data packets?
				if(e_NeighborCTRflg = '1') then
					next_state <= dp_arrivedOnEast2;
				else
					next_state <= dp_arrivedOnSouth1;
				end if;
			when dp_arrivedOnEast2 =>
					--for i in 0 to 15 loop
						--Look for GID/PID 
						--if()
					--end loop;
					address <= "0000";			--should be the address found above
					rw <= '0';
					rsv_en <= '1', '0' after 1 ns;
					next_state <= dp_arrivedOnEast3;
			when dp_arrivedOnEast3 =>
					--Read RSV_TABLE
					--Control VCC
					n_vc_rnaSelI <= "00";		--Value from RSV TABLE (PATH) rsv_data_in
	
					--Acknowledge? 
					e_CTRflg <= '1', '0' after 1 ns;
					next_state <= dp_arrivedOnSouth1;
--*SOUTH ARRIVALS*--
			when dp_arrivedOnSouth1 =>
				--Any new data packets?
				if(s_NeighborCTRflg = '1') then
					next_state <= dp_arrivedOnSouth2;
				else
					next_state <= dp_arrivedOnWest1;
				end if;
			when dp_arrivedOnSouth2 =>
					--for i in 0 to 15 loop
						--Look for GID/PID 
						--if()
					--end loop;
					address <= "0000";			--should be the address found above
					rw <= '0';
					rsv_en <= '1', '0' after 1 ns;
					next_state <= dp_arrivedOnSouth3;
			when dp_arrivedOnSouth3 =>
					--Read RSV_TABLE
					--Control VCC
					n_vc_rnaSelI <= "00";		--Value from RSV TABLE (PATH) rsv_data_in
	
					--Acknowledge? 
					s_CTRflg <= '1', '0' after 1 ns;
					next_state <= dp_arrivedOnWest1;
--*WEST ARRIVALS*--
			when dp_arrivedOnWest1 =>
				--Any new data packets?
				if(w_NeighborCTRflg = '1') then
					next_state <= dp_arrivedOnWest2;
				else
					next_state <= start;
				end if;
			when dp_arrivedOnWest2 =>
					--for i in 0 to 15 loop
						--Look for GID/PID 
						--if()
					--end loop;
					address <= "0000";			--should be the address found above
					rw <= '0';
					rsv_en <= '1', '0' after 1 ns;
					next_state <= dp_arrivedOnWest3;
			when dp_arrivedOnWest3 =>
					--Read RSV_TABLE
					--Control VCC
					n_vc_rnaSelI <= "00";			--Value from RSV TABLE (PATH) rsv_data_in
	
					--Acknowledge? 
					w_CTRflg <= '1', '0' after 1 ns;
					next_state <= start;
			when others =>
				next_state <= start;
		end case;
	end process;
		
end Behavioral;

