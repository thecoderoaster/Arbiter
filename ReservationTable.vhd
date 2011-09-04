----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:58:25 06/09/2011 
-- Design Name: 
-- Module Name:    ReservationTable - Behavioral 
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

entity ReservationTable is
	generic(word_size 	: natural;
			  address_size	: natural);
   port (  d 			: in  std_logic_vector(word_size-1 downto 0);
			  addr 		: in std_logic_vector(address_size-1 downto 0);
           rw 			: in  std_logic;
			  en			: in std_logic;
           q 			: out std_logic_vector(word_size-1 downto 0));
end ReservationTable;

architecture Behavioral of ReservationTable is
	type memory_type is array (0 to 2**address_size-1) of
		std_logic_vector(word_size-1 downto 0);
	signal rsv_table : memory_type := 
	( "0000000000000000000",
	  "0000000000000000000",
	  "0000000000000000000",
	  "0000000000000000000",
	  "0000000000000000000",
	  "0000000000000000000",
	  "0000000000000000000",
	  "0000000000000000000",
	  "0000000000000000000",
	  "0000000000000000000",
	  "0000000000000000000",
	  "0000000000000000000",
	  "0000000000000000000",
	  "0000000000000000000",
	  "0000000000000000000",
	  "0000000000000000000");  
	
begin

	--reset_process:		Creates a component reset of all signals
--	reset_process: process
--	begin
--		wait until rst'event and rst = '1';
--			for i in 15 downto 0 loop
--				rsv_table(i) <= "0000000000000000";
--			end loop;
--			q <= "0000000000000000" after 1 ns;
--	end process;

	--main process:		Stores and Loads memory values based on address
	process
	begin
			wait until en'event and en = '1';
			--Read
			if rw = '0' and en = '1' then
				q <= rsv_table(conv_integer(addr));
				
			--Write
			elsif rw = '1' and en = '1' then
				rsv_table(conv_integer(addr)) <= d;
			
			else
				q <= "ZZZZZZZZZZZZZZZZZZZ";
			end if;
	end process;

end Behavioral;

