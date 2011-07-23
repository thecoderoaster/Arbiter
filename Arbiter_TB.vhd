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
				--Internal
				clk					: in std_logic;
				reset					: in std_logic;
				
				--Virtual Channel Related
				n_vc_deq 			: in  	std_logic;									-- Dequeue latch input (from RNA) (dmuxed)
				n_vc_rnaSelI 		: in  	std_logic_vector (1 downto 0);		-- FIFO select for input (from RNA) 
				n_vc_rnaSelO 		: in  	std_logic_vector (1 downto 0);		-- FIFO select for output (from RNA) 
				n_vc_rnaSelS		: in		std_logic_vector (1 downto 0);		-- FIFO select for status (from RNA)
				n_vc_strq 			: in  	std_logic;									-- Status request (from RNA) (dmuxed)
				n_vc_status 		: out  	std_logic_vector (1 downto 0);		-- Latched status flags of pointed FIFO (muxed)
				
				e_vc_deq 			: in  	std_logic;									-- Dequeue latch input (from RNA) (dmuxed)
				e_vc_rnaSelI 		: in  	std_logic_vector (1 downto 0);		-- FIFO select for input (from RNA) 
				e_vc_rnaSelO 		: in  	std_logic_vector (1 downto 0);		-- FIFO select for output (from RNA) 
				e_vc_rnaSelS		: in		std_logic_vector (1 downto 0);		-- FIFO select for status (from RNA)
				e_vc_strq 			: in  	std_logic;									-- Status request (from RNA) (dmuxed)
				e_vc_status 		: out  	std_logic_vector (1 downto 0);		-- Latched status flags of pointed FIFO (muxed)
				
				s_vc_deq 			: in  	std_logic;									-- Dequeue latch input (from RNA) (dmuxed)
				s_vc_rnaSelI 		: in  	std_logic_vector (1 downto 0);		-- FIFO select for input (from RNA) 
				s_vc_rnaSelO 		: in  	std_logic_vector (1 downto 0);		-- FIFO select for output (from RNA) 
				s_vc_rnaSelS		: in		std_logic_vector (1 downto 0);		-- FIFO select for status (from RNA)
				s_vc_strq 			: in  	std_logic;									-- Status request (from RNA) (dmuxed)
				s_vc_status 		: out  	std_logic_vector (1 downto 0);		-- Latched status flags of pointed FIFO (muxed)
				
				w_vc_deq 			: in  	std_logic;									-- Dequeue latch input (from RNA) (dmuxed)
				w_vc_rnaSelI 		: in  	std_logic_vector (1 downto 0);		-- FIFO select for input (from RNA) 
				w_vc_rnaSelO 		: in  	std_logic_vector (1 downto 0);		-- FIFO select for output (from RNA) 
				w_vc_rnaSelS		: in		std_logic_vector (1 downto 0);		-- FIFO select for status (from RNA)
				w_vc_strq 			: in  	std_logic;									-- Status request (from RNA) (dmuxed)
				w_vc_status 		: out  	std_logic_vector (1 downto 0);		-- Latched status flags of pointed FIFO (muxed)
			
				--Neighbor Arbiter 
				n_NeighborCTRflg		: in std_logic;						--After CTR goes up, and once this goes 
				e_NeighborCTRflg		: in std_logic;						--down, we dequeue our stuff.
				s_NeighborCTRflg		: in std_logic;
				w_NeighborCTRflg		: in std_logic;
				

				--FCU Related
				n_CTRflg					: out std_logic;						-- Send a CTR to neighbor for packet
				e_CTRflg					: out std_logic;													
				s_CTRflg					: out std_logic;
				w_CTRflg					: out std_logic;
			
				n_CtrlFlg				: in std_logic;						--Receive a control packet flag from neighbor 
				e_CtrlFlg				: in std_logic;						--(data good from neighbor via fcu)
				s_CtrlFlg				: in std_logic;
				w_CtrlFlg				: in std_logic;
			
				--Scheduler Related
				n_rnaCtrl			: in std_logic_vector(RSV_WIDTH-1 downto 0);			-- Control Packet 
				e_rnaCtrl			: in std_logic_vector(RSV_WIDTH-1 downto 0);
				s_rnaCtrl			: in std_logic_vector(RSV_WIDTH-1 downto 0);
				w_rnaCtrl			: in std_logic_vector(RSV_WIDTH-1 downto 0);
								
				--Switch Related
				sw_nSel				: out std_logic_vector(2 downto 0);
				sw_eSel				: out std_logic_vector(2 downto 0);
				sw_sSel				: out std_logic_vector(2 downto 0);
				sw_wSel				: out std_logic_vector(2 downto 0);
				sw_ejectSel			: out std_logic_vector(2 downto 0);										
				sw_rnaCtFl			: in std_logic;												-- Flag from Switch for injection packet
				rna_ctrlPkt			: out std_logic_vector (RSV_WIDTH-1 downto 0);		-- Control packet generator output				
				injt_ctrlPkt		: in std_logic_vector (RSV_WIDTH-1 downto 0)			-- coming from switch control packet from PE	
    );
    END COMPONENT;
    

   --Inputs
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
	
	--Virtual Channels
	signal n_vc_deq 			:  std_logic := '0';
	signal n_vc_rnaSelI 		:  std_logic_vector (1 downto 0); 
	signal n_vc_rnaSelO 		:  std_logic_vector (1 downto 0); 
	signal n_vc_rnaSelS		:  std_logic_vector (1 downto 0);
	signal n_vc_strq 			:  std_logic := '0';
	signal n_vc_status 		:  std_logic_vector (1 downto 0);

	signal e_vc_deq 			:  std_logic := '0';
	signal e_vc_rnaSelI 		:  std_logic_vector (1 downto 0); 
	signal e_vc_rnaSelO 		:  std_logic_vector (1 downto 0); 
	signal e_vc_rnaSelS		:  std_logic_vector (1 downto 0);
	signal e_vc_strq 			:  std_logic := '0';
	signal e_vc_status 		:  std_logic_vector (1 downto 0);

	signal s_vc_deq 			:  std_logic := '0';
	signal s_vc_rnaSelI 		:  std_logic_vector (1 downto 0); 
	signal s_vc_rnaSelO 		:  std_logic_vector (1 downto 0); 
	signal s_vc_rnaSelS		:  std_logic_vector (1 downto 0);
	signal s_vc_strq 			:  std_logic := '0';
	signal s_vc_status 		:  std_logic_vector (1 downto 0);

	signal w_vc_deq 			:  std_logic := '0';
	signal w_vc_rnaSelI 		:  std_logic_vector (1 downto 0); 
	signal w_vc_rnaSelO 		:  std_logic_vector (1 downto 0); 
	signal w_vc_rnaSelS		:  std_logic_vector (1 downto 0);
	signal w_vc_strq 			:  std_logic := '0';
	signal w_vc_status 		:  std_logic_vector (1 downto 0);	

	--Neighbor Arbiter 
	signal n_NeighborCTRflg		: std_logic := '0'; 
	signal e_NeighborCTRflg		: std_logic := '0';
	signal s_NeighborCTRflg		: std_logic := '0';
	signal w_NeighborCTRflg		: std_logic := '0';
	
	signal n_CTRflg			:  std_logic := '0';										
	signal e_CTRflg			:  std_logic := '0';													
	signal s_CTRflg			:  std_logic := '0';
	signal w_CTRflg			:  std_logic := '0';

	signal sw_nSel				: 	std_logic_vector(2 downto 0);
	signal sw_eSel				: 	std_logic_vector(2 downto 0);
	signal sw_sSel				: 	std_logic_vector(2 downto 0);
	signal sw_wSel				: 	std_logic_vector(2 downto 0);
	signal sw_ejectSel		: 	std_logic_vector(2 downto 0);										
	signal sw_rnaCtFl			: 	std_logic;	

	signal rna_ctrlPkt		:  std_logic_vector (RSV_WIDTH-1 downto 0);
	signal injt_ctrlPkt 		:  std_logic_vector (RSV_WIDTH-1 downto 0);
	
   -- Clock period definitions 1MHz
   constant clk_period : time := 1us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Arbiter PORT MAP (
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
          injt_ctrlPkt => injt_ctrlPkt,
			 n_vc_deq => n_vc_deq,
			 n_vc_rnaSelI => n_vc_rnaSelI,
			 n_vc_rnaSelO => n_vc_rnaSelO,
			 n_vc_rnaSelS => n_vc_rnaSelS,
			 n_vc_strq => n_vc_strq,
			 n_vc_status => n_vc_status,
			 e_vc_deq => e_vc_deq,
			 e_vc_rnaSelI => e_vc_rnaSelI,
			 e_vc_rnaSelO => e_vc_rnaSelO,
			 e_vc_rnaSelS => e_vc_rnaSelS,
			 e_vc_strq => e_vc_strq,
			 e_vc_status => e_vc_status,
			 s_vc_deq => s_vc_deq,
			 s_vc_rnaSelI => s_vc_rnaSelI,
			 s_vc_rnaSelO => s_vc_rnaSelO,
			 s_vc_rnaSelS => s_vc_rnaSelS,
			 s_vc_strq => s_vc_strq,
			 s_vc_status => s_vc_status,
			 w_vc_deq => w_vc_deq,
			 w_vc_rnaSelI => w_vc_rnaSelI,
			 w_vc_rnaSelO => w_vc_rnaSelO,
			 w_vc_rnaSelS => w_vc_rnaSelS,
			 w_vc_strq => w_vc_strq,
			 w_vc_status => w_vc_status,
			 n_NeighborCTRflg => n_NeighborCTRflg,
			 e_NeighborCTRflg => e_NeighborCTRflg,
			 s_NeighborCTRflg => s_NeighborCTRflg,
			 w_NeighborCTRflg => w_NeighborCTRflg,
          n_CTRflg => n_CTRflg,
			 e_CTRflg => e_CTRflg,
			 s_CTRflg => s_CTRflg,
			 w_CTRflg => w_CTRflg,
			 sw_nSel => sw_nSel,
			 sw_eSel => sw_eSel,
			 sw_sSel => sw_sSel,
			 sw_wSel => sw_wSel,
			 sw_rnaCtFl => sw_rnaCtFl,
			 sw_ejectSel => sw_ejectSel,
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
		n_CTRflg	<= '0';
		e_CTRflg	<= '0';												
		s_CTRflg	<= '0';
		w_CTRflg	<= '0';
		
		n_CtrlFlg <= '0';
		e_CtrlFlg <= '0';
		s_CtrlFlg <= '0';
		w_CtrlFlg <= '0';
	
		n_rnaCtrl <= "000000000000000000000000000000000000000000000000";
		e_rnaCtrl <= "000000000000000000000000000000000000000000000000";
		s_rnaCtrl <= "000000000000000000000000000000000000000000000000";
		w_rnaCtrl <= "000000000000000000000000000000000000000000000000";
		injt_ctrlPkt <= "000000000000000000000000000000000000000000000000";
		
		--Initiate a Reset
		reset <= '0';
		wait for 1 ps;
		reset <= '1';
		wait for 1 ps;
		reset <= '0';
		
		--Wait 10 us before starting
		wait for clk_period*10;			
	
		-- insert stimulus here
		n_rnaCtrl <= "000000000000000000000000100000010000000100001111";	 --GID : 15    PID : 1
		n_CtrlFlg <= '1';
		e_rnaCtrl <= "000000000000000000000100000000110000001000001111";	 --GID : 15    PID : 2
		e_CtrlFlg <= '1';
		w_rnaCtrl <= "000000000000000000000000010000010000001000000110";	 --GID : 6     PID : 1
		w_CtrlFlg <= '1';
		s_rnaCtrl <= "000000000000000000000000000010000000001000001001";	 --GID:  9     PID : 1
		s_CtrlFlg <= '1';
		injt_ctrlPkt <= "000000000000000000000000010010000000001000000011"; -- GID: 3     PID : 1 
		wait for 1 us;
			
      wait;
   end process;

END;
