----------------------------------------------------------------------------------
-- Company:			 University of Nevada, Las Vegas 
-- Engineer: 		 Krikor Hovasapian (ECE Graduate Student)
-- 					 Kareem Matariyeh (ECE Graduate Student)
-- Create Date:    14:35:57 03/04/2011 
-- Design Name: 	 BlazeRouter
-- Module Name:    RoutingTable - RTL 
-- Project Name: 	 BlazeRouter
-- Target Devices: xc4vsx35-10ff668
-- Tool versions:  Xilinx ISE 12.4
-- Description: 
--						 Part of the BlazeRouter design, RoutingTable is responsible for
--						 containing the primary and secondary routing paths for an incoming
--						 destination packet. The LUT's are two array table concatenated by
--						 their array indicies.
-- Dependencies: 
--
-- Revision: 
-- 					 Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;
use work.router_library.all;

entity RoutingTable is
    Port ( 
			  clk			: in  std_logic;
			  data_in	: in  std_logic_vector (RSV_WIDTH downto 0);	-- data is 40 bits wide (in)
           data_out	: out	std_logic_vector (RSV_WIDTH downto 0);	-- data is 40 bits wide (out)
           en 			: in  std_logic;											-- en := 0 (DISABLE) | 1 (ENABLE)
			  rw			: in  std_logic;											-- rw := 0 (READ) | 1 (WRITE)
			  busy		: out std_logic;											-- busy: = 0 (NOT BUSY) | 1 (BUSY)
			  full		: out std_logic;											-- full: = 0 (VACANCY) | 1 (NO VACANCY)
			  ready		: out std_logic);											-- ready: = 0 (NO DATA) | 1 (DATA READY)
end RoutingTable;

architecture rtl of RoutingTable is
begin

	ramproc:	process
		variable ramblock 	: t_ram40;
		variable count		: integer range 0 to LUT_SIZE := 0;
		begin	
		wait until clk'event and clk ='1';
			if (en = '1' and rw = '0') then		--READ			
				busy <= '1' after 1 ns;
				ready <= '0' after 1 ns;
				data_out <= ramblock(0) after 1 ns;
				count := (count - 1);
				ready <= '1' after 1 ns;
				full <= '0' after 1 ns;
				busy <= '0' after 1 ns;	
			elsif (en = '1' and rw = '1') then	--WRITE
				busy <= '1' after 1 ns;
				ready <= '0' after 1 ns;
				if(count < LUT_SIZE) then
					ramblock(count) := data_in;
					count := count + 1;
					full <= '0' after 1 ns;
				else
					full <= '1' after 1 ns;
				end if;
				busy <= '0' after 1 ns;
		else
			data_out <= "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ" after 1 ns;
			busy <= 'Z';
			ready <= 'Z';
			full <= 'Z';
		end if;
	end process;
end rtl;
