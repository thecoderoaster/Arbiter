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
static const char *ng0 = "C:/Users/kor/Documents/ArbiterTest/Scheduler.vhd";
extern char *IEEE_P_3620187407;

int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_4219528008_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 2032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);

LAB6:    t2 = (t0 + 2228);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 2228);
    *((int *)t6) = 0;
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 960U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t8 = (t5 == (unsigned char)2);
    if (t8 == 1)
        goto LAB14;

LAB15:    t3 = (unsigned char)0;

LAB16:    if (t3 != 0)
        goto LAB11;

LAB13:    t2 = (t0 + 960U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t8 = (t5 == (unsigned char)3);
    if (t8 == 1)
        goto LAB19;

LAB20:    t3 = (unsigned char)0;

LAB21:    if (t3 != 0)
        goto LAB17;

LAB18:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4280);
    t6 = (t0 + 2272);
    t7 = (t6 + 32U);
    t11 = *((char **)t7);
    t17 = (t11 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB12:    goto LAB2;

LAB5:    t4 = (t0 + 1028U);
    t5 = xsi_signal_has_event(t4);
    if (t5 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t6 = (t0 + 1052U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB10;

LAB11:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1236U);
    t7 = *((char **)t2);
    t2 = (t0 + 776U);
    t11 = *((char **)t2);
    t2 = (t0 + 4124U);
    t12 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t11, t2);
    t13 = (t12 - 0);
    t14 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t12);
    t15 = (4U * t14);
    t16 = (0 + t15);
    t17 = (t7 + t16);
    t18 = (t0 + 2272);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t17, 4U);
    xsi_driver_first_trans_fast_port(t18);
    goto LAB12;

LAB14:    t2 = (t0 + 1052U);
    t6 = *((char **)t2);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB16;

LAB17:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 592U);
    t7 = *((char **)t2);
    t2 = (t0 + 776U);
    t11 = *((char **)t2);
    t2 = (t0 + 4124U);
    t12 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t11, t2);
    t13 = (t12 - 0);
    t14 = (t13 * 1);
    t15 = (4U * t14);
    t16 = (0U + t15);
    t17 = (t0 + 2308);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t7, 4U);
    xsi_driver_first_trans_delta(t17, t16, 4U, 0LL);
    goto LAB12;

LAB19:    t2 = (t0 + 1052U);
    t6 = *((char **)t2);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB21;

}


extern void work_a_4219528008_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4219528008_3212880686_p_0};
	xsi_register_didat("work_a_4219528008_3212880686", "isim/Arbiter_TB_isim_beh.exe.sim/work/a_4219528008_3212880686.didat");
	xsi_register_executes(pe);
}
