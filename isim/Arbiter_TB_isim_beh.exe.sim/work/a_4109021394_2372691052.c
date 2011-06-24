/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xcb73ee62 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/kor/Documents/ArbiterTest/Arbiter_TB.vhd";



static void work_a_4109021394_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(258, ng0);
    t2 = (t0 + 2432);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(259, ng0);
    t2 = (t0 + 1500U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1956);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(260, ng0);
    t2 = (t0 + 2432);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(261, ng0);
    t2 = (t0 + 1500U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1956);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4109021394_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int64 t10;

LAB0:    t1 = (t0 + 2200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(307, ng0);
    t2 = (t0 + 2468);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(308, ng0);
    t2 = (t0 + 2504);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(318, ng0);
    t2 = (t0 + 5108);
    t4 = (t0 + 2540);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(319, ng0);
    t2 = (t0 + 5148);
    t4 = (t0 + 2576);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(320, ng0);
    t2 = (t0 + 5188);
    t4 = (t0 + 2612);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(321, ng0);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(322, ng0);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(323, ng0);
    t2 = (t0 + 2720);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(326, ng0);
    t9 = (100 * 1000000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(327, ng0);
    t2 = (t0 + 2720);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(328, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2720);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2720);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(331, ng0);
    t2 = (t0 + 1500U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t10 = (t9 * 10);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t10);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(334, ng0);
    t2 = (t0 + 5228);
    t4 = (t0 + 2540);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(335, ng0);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(336, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2648);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(337, ng0);
    t2 = (t0 + 5268);
    t4 = (t0 + 2576);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(338, ng0);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(339, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2684);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(340, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(341, ng0);
    t2 = (t0 + 5308);
    t4 = (t0 + 2540);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(342, ng0);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(343, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2648);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(344, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(345, ng0);
    t2 = (t0 + 5348);
    t4 = (t0 + 2576);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(346, ng0);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(347, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2684);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(348, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(349, ng0);
    t2 = (t0 + 5388);
    t4 = (t0 + 2540);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(350, ng0);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(351, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2648);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(352, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(353, ng0);
    t2 = (t0 + 5428);
    t4 = (t0 + 2576);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(354, ng0);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(355, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2684);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(356, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(357, ng0);
    t2 = (t0 + 5468);
    t4 = (t0 + 2576);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(358, ng0);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(359, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2684);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(360, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(361, ng0);
    t2 = (t0 + 5508);
    t4 = (t0 + 2540);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(362, ng0);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(363, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2648);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(364, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(365, ng0);
    t2 = (t0 + 5548);
    t4 = (t0 + 2540);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(366, ng0);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(367, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2648);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(368, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(369, ng0);
    t2 = (t0 + 5588);
    t4 = (t0 + 2540);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(370, ng0);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(371, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2648);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(372, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    xsi_set_current_line(373, ng0);
    t2 = (t0 + 5628);
    t4 = (t0 + 2576);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(374, ng0);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(375, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2684);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(376, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    xsi_set_current_line(377, ng0);
    t2 = (t0 + 5668);
    t4 = (t0 + 2540);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(378, ng0);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(379, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2648);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(380, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    xsi_set_current_line(381, ng0);
    t2 = (t0 + 5708);
    t4 = (t0 + 2576);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(382, ng0);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(383, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2684);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(384, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB58:    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    xsi_set_current_line(385, ng0);
    t2 = (t0 + 5748);
    t4 = (t0 + 2576);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(386, ng0);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(387, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2684);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(388, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

LAB60:    xsi_set_current_line(389, ng0);
    t2 = (t0 + 5788);
    t4 = (t0 + 2540);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(390, ng0);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(391, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2648);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(392, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB66:    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    xsi_set_current_line(393, ng0);
    t2 = (t0 + 5828);
    t4 = (t0 + 2576);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(394, ng0);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(395, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2684);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(396, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB70:    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB65:    goto LAB64;

LAB67:    goto LAB65;

LAB68:    xsi_set_current_line(397, ng0);
    t2 = (t0 + 5868);
    t4 = (t0 + 2576);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(398, ng0);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(399, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2684);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(400, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2100);
    xsi_process_wait(t2, t9);

LAB74:    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB69:    goto LAB68;

LAB71:    goto LAB69;

LAB72:    xsi_set_current_line(401, ng0);
    t2 = (t0 + 5908);
    t4 = (t0 + 2540);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(402, ng0);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(403, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2648);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2648);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(405, ng0);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB73:    goto LAB72;

LAB75:    goto LAB73;

LAB76:    goto LAB2;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

}


extern void work_a_4109021394_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4109021394_2372691052_p_0,(void *)work_a_4109021394_2372691052_p_1};
	xsi_register_didat("work_a_4109021394_2372691052", "isim/Arbiter_TB_isim_beh.exe.sim/work/a_4109021394_2372691052.didat");
	xsi_register_executes(pe);
}
