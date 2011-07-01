--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:34:56 01/03/2011
-- Design Name:   
-- Module Name:   C:/Users/ArbiterTest/Arbiter_TB.vhd
-- Project Name:  ArbiterTest
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Arbiter
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_unsigned.all;
USE ieee.numeric_std.ALL;
use work.router_library.all;
 
ENTITY Arbiter_TB IS
END Arbiter_TB;
 
ARCHITECTURE behavior OF Arbiter_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Arbiter
    PORT(
				clk					: in std_logic;

				reset					: in std_logic;
--				n_vc_fStatSel		: out std_logic_vector (1 downto 0);
--				n_vc_enqSel			: out std_logic_vector (1 downto 0);
--				n_vc_statSel		: out std_logic_vector (1 downto 0);
--				n_vc_status			: in std_logic_vector (1 downto 0);
--				n_vc_statStrbSel	: out std_logic_vector (1 downto 0);
--				n_vc_statStrb		: out std_logic;
--				n_vc_dataOutSel	: out std_logic_vector (1 downto 0);
--				n_vc_deqSel			: out std_logic_vector (1 downto 0);
--				n_vc_deq				: out std_logic; 			
--
--				e_vc_fStatSel		: out std_logic_vector (1 downto 0);
--				e_vc_enqSel			: out std_logic_vector (1 downto 0);
--				e_vc_statSel		: out std_logic_vector (1 downto 0);
--				e_vc_status			: in std_logic_vector (1 downto 0);
--				e_vc_statStrbSel	: out std_logic_vector (1 downto 0);
--				e_vc_statStrb		: out std_logic;
--				e_vc_dataOutSel	: out std_logic_vector (1 downto 0);
--				e_vc_deqSel			: out std_logic_vector (1 downto 0);
--				e_vc_deq				: out std_logic; 	
--
--				s_vc_fStatSel		: out std_logic_vector (1 downto 0);
--				s_vc_enqSel			: out std_logic_vector (1 downto 0);
--				s_vc_statSel		: out std_logic_vector (1 downto 0);
--				s_vc_status			: in std_logic_vector (1 downto 0);
--				s_vc_statStrbSel	: out std_logic_vector (1 downto 0);
--				s_vc_statStrb		: out std_logic;
--				s_vc_dataOutSel	: out std_logic_vector (1 downto 0);
--				s_vc_deqSel			: out std_logic_vector (1 downto 0);
--				s_vc_deq				: out std_logic; 	
--
--				w_vc_fStatSel		: out std_logic_vector (1 downto 0);
--				w_vc_enqSel			: out std_logic_vector (1 downto 0);
--				w_vc_statSel		: out std_logic_vector (1 downto 0);
--				w_vc_status			: in std_logic_vector (1 downto 0);
--				w_vc_statStrbSel	: out std_logic_vector (1 downto 0);
--				w_vc_statStrb		: out std_logic;
--				w_vc_dataOutSel	: out std_logic_vector (1 downto 0);
--				w_vc_deqSel			: out std_logic_vector (1 downto 0);
--				w_vc_deq				: out std_logic; 		
--				
				--FCU Related
				n_CTRflg				: out std_logic;										-- Send a CTR to neighbor for packet
				e_CTRflg				: out std_logic;													
				s_CTRflg				: out std_logic;
				w_CTRflg				: out std_logic;
				
				n_CtrlFlg			: in std_logic;										--Receive a control packet flag from neighbor 
				e_CtrlFlg			: in std_logic;										--(data good from neighbor via fcu)
				s_CtrlFlg			: in std_logic;
				w_CtrlFlg			: in std_logic;
			
				--Scheduler Related
				n_rnaCtrl			: in std_logic_vector(RSV_WIDTH-1 downto 0);			-- Control Packet 
				e_rnaCtrl			: in std_logic_vector(RSV_WIDTH-1 downto 0);
				s_rnaCtrl			: in std_logic_vector(RSV_WIDTH-1 downto 0);
				w_rnaCtrl			: in std_logic_vector(RSV_WIDTH-1 downto 0);
				
				-- Routing Table
				
				-- Reservation Table
				
				--Switch Related
--				n_dSel 				: out std_logic_vector (2 downto 0);			-- Select lines for data direction
--				e_dSel 				: out std_logic_vector (2 downto 0);
--				s_dSel 				: out std_logic_vector (2 downto 0);
--				w_dSel 				: out std_logic_vector (2 downto 0);
--				ejct_dSel			: out std_logic_vector (2 downto 0);											
--
				rna_ctrlPkt			: out std_logic_vector (RSV_WIDTH-1 downto 0)		-- Control packet generator output
--				
--				injt_ctrlPkt		: in std_logic_vector (WIDTH downto 0)		-- Control packet from PE	
        );
    END COMPONENT;
    

   --Inputs
--	signal n_vc_status :  std_logic_vector (1 downto 0);
--	signal e_vc_status :  std_logic_vector (1 downto 0);
--	signal s_vc_status :  std_logic_vector (1 downto 0);
--	signal w_vc_status :  std_logic_vector (1 downto 0);
	signal clk :  std_logic := '0';
	signal reset : std_logic := '0';
	signal n_CtrlFlg :  std_logic := '0';	 
	signal e_CtrlFlg :  std_logic := '0';										
	signal s_CtrlFlg :  std_logic := '0';
	signal w_CtrlFlg :  std_logic := '0';
	signal n_rnaCtrl :  std_logic_vector(RSV_WIDTH-1 downto 0);
	signal e_rnaCtrl :  std_logic_vector(RSV_WIDTH-1 downto 0);
	signal s_rnaCtrl :  std_logic_vector(RSV_WIDTH-1 downto 0);
	signal w_rnaCtrl :  std_logic_vector(RSV_WIDTH-1 downto 0);
--	signal injt_ctrlPkt :  std_logic_vector (RSV_WIDTH downto 0);		

 	--Outputs
--	signal n_vc_fStatSel		:  std_logic_vector (1 downto 0);
--	signal n_vc_enqSel		:  std_logic_vector (1 downto 0);
--	signal n_vc_statSel		:  std_logic_vector (1 downto 0);
--	signal n_vc_statStrbSel	:  std_logic_vector (1 downto 0);
--	signal n_vc_statStrb		:  std_logic := '0';
--	signal n_vc_dataOutSel	:  std_logic_vector (1 downto 0);
--	signal n_vc_deqSel		:  std_logic_vector (1 downto 0);
--	signal n_vc_deq			:  std_logic := '0'; 			
--
--	signal e_vc_fStatSel		:  std_logic_vector (1 downto 0);
--	signal e_vc_enqSel		:  std_logic_vector (1 downto 0);
--	signal e_vc_statSel		:  std_logic_vector (1 downto 0);
--	signal e_vc_statStrbSel	:  std_logic_vector (1 downto 0);
--	signal e_vc_statStrb		:  std_logic := '0';
--	signal e_vc_dataOutSel	:  std_logic_vector (1 downto 0);
--	signal e_vc_deqSel		:  std_logic_vector (1 downto 0);
--	signal e_vc_deq			:  std_logic := '0'; 	
--
--	signal s_vc_fStatSel		:  std_logic_vector (1 downto 0);
--	signal s_vc_enqSel		:  std_logic_vector (1 downto 0);
--	signal s_vc_statSel		:  std_logic_vector (1 downto 0);
--	signal s_vc_statStrbSel	:  std_logic_vector (1 downto 0);
--	signal s_vc_statStrb		:  std_logic := '0';
--	signal s_vc_dataOutSel	:  std_logic_vector (1 downto 0);
--	signal s_vc_deqSel		:  std_logic_vector (1 downto 0);
--	signal s_vc_deq			:  std_logic := '0'; 	
--
--	signal w_vc_fStatSel		:  std_logic_vector (1 downto 0);
--	signal w_vc_enqSel		:  std_logic_vector (1 downto 0);
--	signal w_vc_statSel		:  std_logic_vector (1 downto 0);
--	signal w_vc_statStrbSel	:  std_logic_vector (1 downto 0);
--	signal w_vc_statStrb		:  std_logic := '0';
--	signal w_vc_dataOutSel	:  std_logic_vector (1 downto 0);
--	signal w_vc_deqSel		:  std_logic_vector (1 downto 0);
--	signal w_vc_deq			:  std_logic := '0'; 		
--				
	signal n_CTRflg			:  std_logic := '0';										
	signal e_CTRflg			:  std_logic := '0';													
	signal s_CTRflg			:  std_logic := '0';
	signal w_CTRflg			:  std_logic := '0';
--	
--	signal n_dSel 				:  std_logic_vector (2 downto 0);
--	signal e_dSel 				:  std_logic_vector (2 downto 0);
--	signal s_dSel 				:  std_logic_vector (2 downto 0);
--	signal w_dSel 				:  std_logic_vector (2 downto 0);
--	signal ejct_dSel			:  std_logic_vector (2 downto 0);											
--
	signal rna_ctrlPkt		:  std_logic_vector (RSV_WIDTH-1 downto 0);
	
   -- Clock period definitions 1MHz
   constant clk_period : time := 1us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Arbiter PORT MAP (
--          n_vc_status => n_vc_status,
--          e_vc_status => e_vc_status,
--          s_vc_status => s_vc_status,
--          w_vc_status => w_vc_status,
          clk => clk,
			 reset => reset,
          n_CtrlFlg => n_CtrlFlg,
          e_CtrlFlg => e_CtrlFlg,
          s_CtrlFlg => s_CtrlFlg,
          w_CtrlFlg => w_CtrlFlg,
          n_rnaCtrl => n_rnaCtrl,
          e_rnaCtrl => e_rnaCtrl,
          s_rnaCtrl => s_rnaCtrl,
          w_rnaCtrl => w_rnaCtrl,
--          injt_ctrlPkt => injt_ctrlPkt,
--          n_vc_fStatSel => n_vc_fStatSel,
--          n_vc_enqSel => n_vc_enqSel,
--          n_vc_statSel => n_vc_statSel,
--          n_vc_statStrbSel => n_vc_statStrbSel,
--          n_vc_statStrb => n_vc_statStrb,
--          n_vc_dataOutSel => n_vc_dataOutSel,
--          n_vc_deqSel => n_vc_deqSel,
--          n_vc_deq => n_vc_deq,
--			 e_vc_fStatSel => e_vc_fStatSel,
--          e_vc_enqSel => e_vc_enqSel,
--          e_vc_statSel => e_vc_statSel,
--          e_vc_statStrbSel => e_vc_statStrbSel,
--          e_vc_statStrb => e_vc_statStrb,
--          e_vc_dataOutSel => e_vc_dataOutSel,
--          e_vc_deqSel => e_vc_deqSel,
--          e_vc_deq => e_vc_deq,
--			 s_vc_fStatSel => s_vc_fStatSel,
--          s_vc_enqSel => s_vc_enqSel,
--          s_vc_statSel => s_vc_statSel,
--          s_vc_statStrbSel => s_vc_statStrbSel,
--          s_vc_statStrb => s_vc_statStrb,
--          s_vc_dataOutSel => s_vc_dataOutSel,
--          s_vc_deqSel => s_vc_deqSel,
--          s_vc_deq => s_vc_deq,
--			 w_vc_fStatSel => w_vc_fStatSel,
--          w_vc_enqSel => w_vc_enqSel,
--          w_vc_statSel => w_vc_statSel,
--          w_vc_statStrbSel => w_vc_statStrbSel,
--          w_vc_statStrb => w_vc_statStrb,
--          w_vc_dataOutSel => w_vc_dataOutSel,
--          w_vc_deqSel => w_vc_deqSel,
--          w_vc_deq => w_vc_deq,
          n_CTRflg => n_CTRflg,
			 e_CTRflg => e_CTRflg,
			 s_CTRflg => s_CTRflg,
			 w_CTRflg => w_CTRflg,
--			 n_dSel => n_dSel,
--			 e_dSel => e_dSel,
--			 s_dSel => s_dSel,
--			 w_dSel => w_dSel,
--			 ejct_dSel => ejct_dSel,
			 rna_ctrlPkt => rna_ctrlPkt
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
	
   begin		
      
		-- Drive all outputs low
--		n_vc_fStatSel <= "00";
--		n_vc_enqSel <= "00";	
--		n_vc_statSel <= "00";
--		n_vc_statStrbSel <= "00";
--		n_vc_statStrb <= '0';
--		n_vc_dataOutSel <= "00";
--		n_vc_deqSel <= "00";
--		n_vc_deq <= '0'; 			

--		e_vc_fStatSel <= "00";
--		e_vc_enqSel <= "00";
--		e_vc_statSel <= "00";
--		e_vc_statStrbSel <= "00";
--		e_vc_statStrb <= '0';
--		e_vc_dataOutSel <= "00";
--		e_vc_deqSel <= "00";
--		e_vc_deq <= '0';
		
--		s_vc_fStatSel <= "00";
--		s_vc_enqSel <= "00";
--		s_vc_statSel <= "00";
--		s_vc_statStrbSel <= "00";
--		s_vc_statStrb <= '0';
--		s_vc_dataOutSel <= "00";
--		s_vc_deqSel <= "00";
--		s_vc_deq <= '0'; 	

--		w_vc_fStatSel <= "00";
--		w_vc_enqSel <= "00";
--		w_vc_statSel <= "00";
--		w_vc_statStrbSel <= "00";
--		w_vc_statStrb <= '0';
--		w_vc_dataOutSel <= "00";
--		w_vc_deqSel <= "00";
--		w_vc_deq <= '0';		
				
		n_CTRflg	<= '0';
		e_CTRflg	<= '0';												
		s_CTRflg	<= '0';
		w_CTRflg	<= '0';
		
--		n_dSel <= "000";
--		e_dSel <= "000";
--		s_dSel <= "000";
--		w_dSel <= "000";
--		ejct_dSel <= "000";											
--
		n_rnaCtrl <= "000000000000000000000000000000000000000000000000";
		e_rnaCtrl <= "000000000000000000000000000000000000000000000000";
		s_rnaCtrl <= "000000000000000000000000000000000000000000000000";
		w_rnaCtrl <= "000000000000000000000000000000000000000000000000";
		rna_ctrlPkt <= "000000000000000000000000000000000000000000000000";
		n_CtrlFlg <= '0';
		e_CtrlFlg <= '0';
		s_CtrlFlg <= '0';
		w_CtrlFlg <= '0';
		reset <= '0';
		wait for 1 ps;
		reset <= '1';
		wait for 1 ps;
		reset <= '0';
		
		--Wait 10 us before starting
		wait for clk_period*10;			
	
		-- insert stimulus here
		n_rnaCtrl <= "000000000000000000000000100000010000000100001111";	--GID : 15    PID : 1
		n_CtrlFlg <= '1';
		e_rnaCtrl <= "000000000000000000000100000000110000001000001111";	--GID : 15    PID : 2
		e_CtrlFlg <= '1';
		w_rnaCtrl <= "000000000000000000000000010000010000001000000110";	--GID : 6     PID : 1
		w_CtrlFlg <= '1';
		s_rnaCtrl <= "000000010000000000000000000010000000001000001001";	--GID:  9     PID : 1
		s_CtrlFlg <= '1';
		wait for 1 us;
			
      wait;
   end process;

END;
