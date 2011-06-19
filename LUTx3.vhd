----------------------------------------------------------------------------------
-- Company:			 University of Nevada, Las Vegas 
-- Engineer: 		 Krikor Hovasapian (ECE Graduate Student)
-- 					 Kareem Matariyeh (ECE Graduate Student)
-- Create Date:    14:35:57 03/04/2011 
-- Design Name: 	 BlazeRouter
-- Module Name:    LUTx3 - RTL 
-- Project Name: 	 BlazeRouter
-- Target Devices: xc4vsx35-10ff668
-- Tool versions:  Xilinx ISE 12.4
-- Description: 
--						 Part of the BlazeRouter design, LUTx3 is aptly named
--						 to denote that it contains a three dependent look up tables
--						 of WIDTH and SIZE. The LUT's are 2-D tables that are useful
--						 for implementing a shared resource amongst multiple components.
--						 BlazeRouter needs a unit that can store information such as
--						 Routing Tables and Reservation Tables.
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
use work.router_library.all;

entity LUTx3 is
    Port ( data 	: inout  std_logic_vector (WIDTH downto 0);
           addr 	: in  std_logic_vector (2 downto 0);
           en 		: in  std_logic;
           clk 	: in  std_logic
			  busy	: out std_logic);
end LUTx3;

architecture rtl of LUTx3 is
	signal data_in : std_logic_vector(WIDTH downto 0);
begin
	process(clk, addr)
		variable pathdata 	: t_ram8;
		variable altpathdata : t_ram8;
	begin
		if clk'event and clk = '1' then
			
end rtl;

