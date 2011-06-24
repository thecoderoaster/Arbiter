----------------------------------------------------------------------------------
-- Company:			 University of Nevada, Las Vegas 
-- Engineer: 		 Krikor Hovasapian (ECE Graduate Student)
-- 					 Kareem Matariyeh (ECE Graduate Student)
-- Create Date:    13:55:59 12/20/2010
-- Design Name: 	 BlazeRouter
-- Module Name:    Arbiter - RTL
-- Project Name: 	 BlazeRouter
-- Target Devices: xc4vsx35-10ff668
-- Tool versions:  Using ISE 12.4
-- Description: 
--						 Part of the BlazeRouter design, the Arbiter monitors the status
--						 of each buffer within the router to see if any new data has arrived
--						 in a Round Robin with Priority scheme. When data arives, a copy
--						 of the packet within the buffer is taken, analyzed by one of the
--						 routing algorithms and a result is forwarded to the RNA_RESULT
--						 port instructing the switch on configuration.
--
-- Dependencies: 
--						 None
-- Revision: 
-- 					 Revision 0.01 - File Created
--						 Revision 0.02 - Added additional modules (KVH)
--						 Revision 0.03 - Added processes to handle FSM
--						 Revision 0.04 - Works in Xilinx ISE 12.4
--						 Revision 0.05 - Added KM changes to interface with VC/FCU
-- Additional Comments: 
--
----------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
use work.router_library.all;

---- Uncomment the following library declaration if instantiating
---- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;


entity Arbiter is	
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
				e_CTRflg				: out std_logic;													
--				s_CTRflg				: out std_logic;
--				w_CTRflg				: out std_logic;
--				
				n_CtrlFlg			: in std_logic;										--Receive a control packet flag from neighbor 
				e_CtrlFlg			: in std_logic;										--(data good from neighbor via fcu)
--				s_CtrlFlg			: in std_logic;
--				w_CtrlFlg			: in std_logic;
--				
--				
--				--Scheduler Related
				n_rnaCtrl			: in std_logic_vector(RSV_WIDTH-1 downto 0);			-- Control Packet 
				e_rnaCtrl			: in std_logic_vector(RSV_WIDTH-1 downto 0);
--				s_rnaCtrl			: in std_logic_vector(WIDTH downto 0);
--				w_rnaCtrl			: in std_logic_vector(WIDTH downto 0);
								
--				--Switch Related
--				n_dSel 				: out std_logic_vector (2 downto 0);			-- Select lines for data direction
--				e_dSel 				: out std_logic_vector (2 downto 0);
--				s_dSel 				: out std_logic_vector (2 downto 0);
--				w_dSel 				: out std_logic_vector (2 downto 0);
--				ejct_dSel			: out std_logic_vector (2 downto 0);											
--
				rna_ctrlPkt			: out std_logic_vector (RSV_WIDTH-1 downto 0)		-- Control packet generator output
--				
--				injt_ctrlPkt		: in std_logic_vector (WIDTH downto 0)
				);		-- Control packet from PE					

end Arbiter;

architecture rtl of Arbiter is
	component RAMBlock
	generic(word_size 	: natural;
			  address_size	: natural);
   port (  d 			: in  std_logic_vector(word_size-1 downto 0);
			  rst			: in std_logic;
			  addr   	: in  std_logic_vector(address_size-1 downto 0);
           clk 		: in  std_logic;
           rw 			: in  std_logic;
			  en			: in  std_logic;
           q 			: out std_logic_vector(word_size-1 downto 0)
		   );
	end component;
	
	component Scheduler
	generic(word_size		: natural;
			  address_size : natural);
	port (  d 			: in  std_logic_vector(word_size-1 downto 0);
			  rst			: in std_logic;
			  addr   	: in  std_logic_vector(address_size-1 downto 0);
           clk 		: in  std_logic;
           rw 			: in  std_logic;
			  en			: in std_logic;
           q 			: out std_logic_vector(word_size-1 downto 0)
		   );
	end component;
	
	component ControlUnit
	generic(rsv_size		: natural;
			  word_size 	: natural;
			  address_size	: natural);
	port(
			clk				   : in std_logic;
			rst					: in std_logic;
			ram_data_in			: in std_logic_vector (word_size-1 downto 0);
			ram_data_out		: out std_logic_vector (word_size-1 downto 0);
			sch_data_in			: in std_logic_vector(address_size-1 downto 0);
			sch_data_out		: out std_logic_vector(address_size-1 downto 0);
			address				: out std_logic_vector (address_size-1 downto 0);
			rw						: out std_logic;
			ram_en				: out std_logic;
			sch_en				: out std_logic;
			n_CTRflg				: out std_logic;
			n_CtrlFlg			: in std_logic;
			n_rnaCtrl			: in std_logic_vector(rsv_size-1 downto 0);
			e_CTRflg				: out std_logic;
			e_CtrlFlg			: in std_logic;
			e_rnaCtrl			: in std_logic_vector(rsv_size-1 downto 0);
			rna_ctrlPkt			: out std_logic_vector(rsv_size-1 downto 0)
		);
	end component;

	--RoutingTable Related
	signal rt_data_in				: std_logic_vector (PID_WIDTH-1 downto 0);
	signal rt_data_out			: std_logic_vector (PID_WIDTH-1 downto 0);
	signal rt_en					: std_logic;
	signal sh_data_in				: std_logic_vector (ADDR_WIDTH-1 downto 0);
	signal sh_data_out			: std_logic_vector (ADDR_WIDTH-1 downto 0);
	signal sh_en					: std_logic;
	signal rt_address				: std_logic_vector (ADDR_WIDTH-1 downto 0);
	signal rw						: std_logic;
	
	
begin
	
	RoutingTable : RAMBlock
		generic map (PID_WIDTH, ADDR_WIDTH)
		port map (rt_data_in, reset, rt_address, clk, rw, rt_en, rt_data_out);
	
	SchedulerUnit: Scheduler
		generic map (ADDR_WIDTH, ADDR_WIDTH)
		port map(sh_data_in, reset, rt_address, clk, rw, sh_en, sh_data_out);
	
	Control	: ControlUnit
		generic map(RSV_WIDTH, PID_WIDTH, ADDR_WIDTH)
		port map(clk, reset, rt_data_out, rt_data_in, sh_data_out, sh_data_in, rt_address, rw, rt_en, sh_en, 
					n_CTRFlg, n_CtrlFlg, n_rnaCtrl, e_CTRFlg, e_CtrlFlg, e_rnaCtrl, rna_ctrlPkt);
	
	
end rtl;

