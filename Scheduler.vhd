----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:05:10 06/18/2011 
-- Design Name: 
-- Module Name:    Scheduler - Behavioral 
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
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
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

entity Scheduler is
	generic(word_size 	: natural;
			  address_size	: natural);
   port (  d 			: in  std_logic_vector(word_size-1 downto 0);
			  rst			: in std_logic;
			  addr 		: in std_logic_vector(address_size-1 downto 0);
           clk 		: in  std_logic;
           rw 			: in  std_logic;
			  en			: in std_logic;
           q 			: out std_logic_vector(word_size-1 downto 0));
end Scheduler;

architecture Behavioral of Scheduler is
	type schedule_type is array(0 to 2**address_size-1) of
		std_logic_vector(address_size-1 downto 0);
	signal schedule: schedule_type := 
	( "0000",
	  "0000",
	  "0000",
	  "0000",
	  "0000",
	  "0000",
	  "0000",
	  "0000",
	  "0000",
	  "0000",
	  "0000",
	  "0000",
	  "0000",
	  "0000",
	  "0000",
	  "0000");
--	  signal w_address 		: std_logic_vector(address_size-1 downto 0) := "0000";
--	  signal r_address		: std_logic_vector(address_size-1 downto 0) := "0000";
begin

	--main process:		Stores and Loads memory values based on address
	process
	begin
		wait until en'event and en = '1';
			
			--Read
			if rw = '0' and en = '1' then
				q <= schedule(conv_integer(addr));
				--r_address <= r_address + 1;
				
			--Write
			elsif rw = '1' and en = '1' then
				schedule(conv_integer(addr)) <= d;
				--w_address <= w_address + 1;
			end if;
	end process;

end Behavioral;

