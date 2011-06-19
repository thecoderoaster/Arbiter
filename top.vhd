----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:44:07 06/04/2011 
-- Design Name: 
-- Module Name:    top - Behavioral 
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

entity top is
end top;

architecture Behavioral of top is
	component Arbiter
port ( 			
				--Internal
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
--				--FCU Related
				n_CTRflg				: out std_logic;										-- Send a CTR to neighbor for packet
--				e_CTRflg				: out std_logic;													
--				s_CTRflg				: out std_logic;
--				w_CTRflg				: out std_logic;
--				
				n_CtrlFlg			: in std_logic;										--Receive a control packet flag from neighbor 
--				e_CtrlFlg			: in std_logic;										--(data good from neighbor via fcu)
--				s_CtrlFlg			: in std_logic;
--				w_CtrlFlg			: in std_logic;
--				
--				
--				--Scheduler Related
				n_rnaCtrl			: in std_logic_vector(RSV_WIDTH-1 downto 0)			-- Control Packet 
--				e_rnaCtrl			: in std_logic_vector(WIDTH downto 0);
--				s_rnaCtrl			: in std_logic_vector(WIDTH downto 0);
--				w_rnaCtrl			: in std_logic_vector(WIDTH downto 0);
								
--				--Switch Related
--				n_dSel 				: out std_logic_vector (2 downto 0);			-- Select lines for data direction
--				e_dSel 				: out std_logic_vector (2 downto 0);
--				s_dSel 				: out std_logic_vector (2 downto 0);
--				w_dSel 				: out std_logic_vector (2 downto 0);
--				ejct_dSel			: out std_logic_vector (2 downto 0);											
--
--				rna_ctrlPkt			: out std_logic_vector (WIDTH downto 0);		-- Control packet generator output
--				
--				injt_ctrlPkt		: in std_logic_vector (WIDTH downto 0)
				);		-- Control packet from PE			
	end component;

	
	
	--Arbiter Related
	signal clk				: std_logic := '0';
				
	signal reset			: std_logic;
--	signal n_vc_fStatSel_out		: std_logic_vector (1 downto 0);
--	signal n_vc_enqSel_out			: std_logic_vector (1 downto 0);
--	signal n_vc_statSel_out			: std_logic_vector (1 downto 0);
--	signal n_vc_status_in			: std_logic_vector (1 downto 0) := "00";
--	signal n_vc_statStrbSel_out	: std_logic_vector (1 downto 0);
--	signal n_vc_statStrb_out		: std_logic;
--	signal n_vc_dataOutSel_out		: std_logic_vector (1 downto 0);
--	signal n_vc_deqSel_out			: std_logic_vector (1 downto 0);
--	signal n_vc_deq_out				: std_logic; 			
--
--	signal e_vc_fStatSel_out		: std_logic_vector (1 downto 0);
--	signal e_vc_enqSel_out			: std_logic_vector (1 downto 0);
--	signal e_vc_statSel_out			: std_logic_vector (1 downto 0);
--	signal e_vc_status_in			: std_logic_vector (1 downto 0) := "00";
--	signal e_vc_statStrbSel_out	: std_logic_vector (1 downto 0);
--	signal e_vc_statStrb_out		: std_logic;
--	signal e_vc_dataOutSel_out		: std_logic_vector (1 downto 0);
--	signal e_vc_deqSel_out			: std_logic_vector (1 downto 0);
--	signal e_vc_deq_out				: std_logic; 	
--
--	signal s_vc_fStatSel_out		: std_logic_vector (1 downto 0);
--	signal s_vc_enqSel_out			: std_logic_vector (1 downto 0);
--	signal s_vc_statSel_out			: std_logic_vector (1 downto 0);
--	signal s_vc_status_in			: std_logic_vector (1 downto 0) := "00";
--	signal s_vc_statStrbSel_out	: std_logic_vector (1 downto 0);
--	signal s_vc_statStrb_out		: std_logic;
--	signal s_vc_dataOutSel_out		: std_logic_vector (1 downto 0);
--	signal s_vc_deqSel_out			: std_logic_vector (1 downto 0);
--	signal s_vc_deq_out				: std_logic; 	
--
--	signal w_vc_fStatSel_out		: std_logic_vector (1 downto 0);
--	signal w_vc_enqSel_out			: std_logic_vector (1 downto 0);
--	signal w_vc_statSel_out			: std_logic_vector (1 downto 0);
--	signal w_vc_status_in			: std_logic_vector (1 downto 0) := "00";
--	signal w_vc_statStrbSel_out	: std_logic_vector (1 downto 0);
--	signal w_vc_statStrb_out		: std_logic;
--	signal w_vc_dataOutSel_out		: std_logic_vector (1 downto 0);
--	signal w_vc_deqSel_out			: std_logic_vector (1 downto 0);
--	signal w_vc_deq_out				: std_logic; 		
--	
--	--FCU Related
	signal n_CTRflg_out				: std_logic;					-- Send a CTR to neighbor for packet
--	signal e_CTRflg_out				: std_logic;													
--	signal s_CTRflg_out				: std_logic;
--	signal w_CTRflg_out				: std_logic;
--	
	signal n_CtrlFlg_in				: std_logic := '0';				--Receive a control packet flag from neighbor 
--	signal e_CtrlFlg_in				: std_logic := '0';				--(data good from neighbor via fcu)
--	signal s_CtrlFlg_in				: std_logic := '0';
--	signal w_CtrlFlg_in				: std_logic := '0';
--	
--	
--	--Scheduler Related
	signal n_rnaCtrl_in				: std_logic_vector(RSV_WIDTH-1 downto 0);			-- Control Packet 
--	signal e_rnaCtrl_in				: std_logic_vector(WIDTH downto 0);
--	signal s_rnaCtrl_in				: std_logic_vector(WIDTH downto 0);
--	signal w_rnaCtrl_in				: std_logic_vector(WIDTH downto 0);
		
--	--Switch Related
--	signal n_dSel_out 				: std_logic_vector (2 downto 0);			-- Select lines for data direction
--	signal e_dSel_out 				: std_logic_vector (2 downto 0);
--	signal s_dSel_out 				: std_logic_vector (2 downto 0);
--	signal w_dSel_out 				: std_logic_vector (2 downto 0);
--	signal ejct_dSel_out				: std_logic_vector (2 downto 0);											
--
--	signal rna_ctrlPkt_out			: std_logic_vector (WIDTH downto 0);		-- Control packet generator output
--			
--	signal injt_ctrlPkt_in			: std_logic_vector (WIDTH downto 0) := "00000000000000000000000000000000";		-- Control packet from PE
--	
begin

	ar: Arbiter port map(
			clk,
			reset,
--			n_vc_fStatSel_out,
--			n_vc_enqSel_out,
--			n_vc_statSel_out,
--			n_vc_status_in,
--			n_vc_statStrbSel_out,
--			n_vc_statStrb_out,
--			n_vc_dataOutSel_out,
--			n_vc_deqSel_out,
--			n_vc_deq_out,			
--			e_vc_fStatSel_out,
--			e_vc_enqSel_out,
--			e_vc_statSel_out,
--			e_vc_status_in,
--			e_vc_statStrbSel_out,
--			e_vc_statStrb_out,
--			e_vc_dataOutSel_out,
--			e_vc_deqSel_out,
--			e_vc_deq_out,	
--			s_vc_fStatSel_out,
--			s_vc_enqSel_out,
--			s_vc_statSel_out,
--			s_vc_status_in,
--			s_vc_statStrbSel_out,
--			s_vc_statStrb_out,
--			s_vc_dataOutSel_out,
--			s_vc_deqSel_out,
--			s_vc_deq_out,	
--			w_vc_fStatSel_out,
--			w_vc_enqSel_out,
--			w_vc_statSel_out,
--			w_vc_status_in,
--			w_vc_statStrbSel_out,
--			w_vc_statStrb_out,
--			w_vc_dataOutSel_out,
--			w_vc_deqSel_out,
--			w_vc_deq_out, 		
			n_CTRflg_out,
--			e_CTRflg_out,													
--			s_CTRflg_out,
--			w_CTRflg_out,
			n_CtrlFlg_in, 
--			e_CtrlFlg_in,
--			s_CtrlFlg_in,
--			w_CtrlFlg_in,
			n_rnaCtrl_in
--			e_rnaCtrl_in,
--			s_rnaCtrl_in,
--			w_rnaCtrl_in,
--			n_dSel_out,
--			e_dSel_out,
--			s_dSel_out,
--			w_dSel_out,
--			ejct_dSel_out,											
--			rna_ctrlPkt_out,
--			injt_ctrlPkt_in
	);

end Behavioral;

