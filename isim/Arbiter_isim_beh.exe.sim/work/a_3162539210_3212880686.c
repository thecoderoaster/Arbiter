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
static const char *ng0 = "C:/Users/kor/Documents/ArbiterTest/ControlUnit.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3162539210_3212880686_p_0(char *t0)
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
    int64 t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3756U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);

LAB6:    t2 = (t0 + 4240);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 4240);
    *((int *)t6) = 0;
    xsi_set_current_line(81, ng0);
    t10 = (1 * 1000LL);
    t2 = (t0 + 4300);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, t10);
    t12 = (t0 + 4300);
    xsi_driver_intertial_reject(t12, t10, t10);
    goto LAB2;

LAB5:    t4 = (t0 + 660U);
    t5 = xsi_signal_has_event(t4);
    if (t5 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t6 = (t0 + 684U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB10;

}

static void work_a_3162539210_3212880686_p_1(char *t0)
{
    char t10[16];
    char t12[16];
    char t22[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 3900U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);

LAB6:    t2 = (t0 + 4248);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 4248);
    *((int *)t6) = 0;
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2524U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t5 = (t3 == (unsigned char)3);
    if (t5 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB2;

LAB5:    t4 = (t0 + 568U);
    t5 = xsi_signal_has_event(t4);
    if (t5 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t6 = (t0 + 592U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB10;

LAB11:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2340U);
    t6 = *((char **)t2);
    t2 = (t0 + 8004U);
    t7 = (t0 + 8297);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 15;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (15 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t10, t6, t2, t7, t12);
    t17 = (t0 + 4336);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t14, 16U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2340U);
    t4 = *((char **)t2);
    t2 = (t0 + 8004U);
    t6 = (t0 + 8313);
    t11 = (t10 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 0;
    t13 = (t11 + 4U);
    *((int *)t13) = 11;
    t13 = (t11 + 8U);
    *((int *)t13) = 1;
    t15 = (11 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t16;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t6, t10);
    if (t3 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(92, ng0);
    t13 = (t0 + 2432U);
    t14 = *((char **)t13);
    t13 = (t0 + 8020U);
    t17 = (t0 + 8325);
    t19 = (t22 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 15;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t23 = (15 - 0);
    t16 = (t23 * 1);
    t16 = (t16 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t16;
    t20 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t14, t13, t17, t22);
    t21 = (t0 + 4372);
    t24 = (t21 + 32U);
    t25 = *((char **)t24);
    t26 = (t25 + 40U);
    t27 = *((char **)t26);
    memcpy(t27, t20, 16U);
    xsi_driver_first_trans_fast(t21);
    goto LAB15;

}

static void work_a_3162539210_3212880686_p_2(char *t0)
{
    char t13[16];
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
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    int64 t25;

LAB0:    t1 = (t0 + 4044U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);

LAB6:    t2 = (t0 + 4256);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 4256);
    *((int *)t6) = 0;
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 1604U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t8 = (t5 == (unsigned char)3);
    if (t8 == 1)
        goto LAB14;

LAB15:    t3 = (unsigned char)0;

LAB16:    if (t3 != 0)
        goto LAB11;

LAB13:    t2 = (t0 + 1604U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t8 = (t5 == (unsigned char)3);
    if (t8 == 1)
        goto LAB22;

LAB23:    t3 = (unsigned char)0;

LAB24:    if (t3 != 0)
        goto LAB20;

LAB21:
LAB12:    xsi_set_current_line(139, ng0);
    t25 = (10 * 1000LL);
    t2 = (t0 + 3944);
    xsi_process_wait(t2, t25);

LAB27:    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB5:    t4 = (t0 + 568U);
    t5 = xsi_signal_has_event(t4);
    if (t5 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t6 = (t0 + 592U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB10;

LAB11:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2800U);
    t7 = *((char **)t2);
    t2 = (t0 + 8068U);
    t11 = (t0 + 8341);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 3;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t18 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t7, t2, t11, t13);
    if (t18 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4732);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);

LAB18:    goto LAB12;

LAB14:    t2 = (t0 + 2892U);
    t6 = *((char **)t2);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)2);
    t3 = t10;
    goto LAB16;

LAB17:    xsi_set_current_line(119, ng0);
    t15 = (t0 + 4408);
    t19 = (t15 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    t2 = (t0 + 4444);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t11 = (t7 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1696U);
    t4 = *((char **)t2);
    t17 = (39 - 3);
    t23 = (t17 * 1U);
    t24 = (0 + t23);
    t2 = (t4 + t24);
    t6 = (t0 + 4480);
    t7 = (t6 + 32U);
    t11 = *((char **)t7);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4516);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4552);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1696U);
    t4 = *((char **)t2);
    t17 = (39 - 19);
    t23 = (t17 * 1U);
    t24 = (0 + t23);
    t2 = (t4 + t24);
    t6 = (t0 + 4588);
    t7 = (t6 + 32U);
    t11 = *((char **)t7);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t2, 16U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4624);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 4516);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4408);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    t2 = (t0 + 8036U);
    t6 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t4, t2, 1);
    t7 = (t0 + 4660);
    t11 = (t7 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2800U);
    t4 = *((char **)t2);
    t2 = (t0 + 8068U);
    t6 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t4, t2, 1);
    t7 = (t0 + 4696);
    t11 = (t7 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(130, ng0);
    t25 = (10 * 1000LL);
    t2 = (t0 + 4624);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t25);
    t12 = (t0 + 4624);
    xsi_driver_intertial_reject(t12, t25, t25);
    xsi_set_current_line(131, ng0);
    t25 = (10 * 1000LL);
    t2 = (t0 + 4552);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t25);
    t12 = (t0 + 4552);
    xsi_driver_intertial_reject(t12, t25, t25);
    goto LAB18;

LAB20:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 4732);
    t7 = (t2 + 32U);
    t11 = *((char **)t7);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB22:    t2 = (t0 + 2892U);
    t6 = *((char **)t2);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB24;

LAB25:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1880U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t8 = (t5 == (unsigned char)3);
    if (t8 == 1)
        goto LAB32;

LAB33:    t3 = (unsigned char)0;

LAB34:    if (t3 != 0)
        goto LAB29;

LAB31:    t2 = (t0 + 1880U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t8 = (t5 == (unsigned char)3);
    if (t8 == 1)
        goto LAB40;

LAB41:    t3 = (unsigned char)0;

LAB42:    if (t3 != 0)
        goto LAB38;

LAB39:
LAB30:    goto LAB2;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

LAB29:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 2800U);
    t7 = *((char **)t2);
    t2 = (t0 + 8068U);
    t11 = (t0 + 8345);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 3;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t18 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t7, t2, t11, t13);
    if (t18 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 4732);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);

LAB36:    goto LAB30;

LAB32:    t2 = (t0 + 2892U);
    t6 = *((char **)t2);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)2);
    t3 = t10;
    goto LAB34;

LAB35:    xsi_set_current_line(144, ng0);
    t15 = (t0 + 4768);
    t19 = (t15 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    t2 = (t0 + 4444);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t11 = (t7 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 1972U);
    t4 = *((char **)t2);
    t17 = (39 - 3);
    t23 = (t17 * 1U);
    t24 = (0 + t23);
    t2 = (t4 + t24);
    t6 = (t0 + 4480);
    t7 = (t6 + 32U);
    t11 = *((char **)t7);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4516);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 4552);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 1972U);
    t4 = *((char **)t2);
    t17 = (39 - 19);
    t23 = (t17 * 1U);
    t24 = (0 + t23);
    t2 = (t4 + t24);
    t6 = (t0 + 4588);
    t7 = (t6 + 32U);
    t11 = *((char **)t7);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t2, 16U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4624);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4516);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 4768);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    t2 = (t0 + 8036U);
    t6 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t4, t2, 1);
    t7 = (t0 + 4660);
    t11 = (t7 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 2800U);
    t4 = *((char **)t2);
    t2 = (t0 + 8068U);
    t6 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t4, t2, 1);
    t7 = (t0 + 4696);
    t11 = (t7 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(155, ng0);
    t25 = (10 * 1000LL);
    t2 = (t0 + 4624);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t25);
    t12 = (t0 + 4624);
    xsi_driver_intertial_reject(t12, t25, t25);
    xsi_set_current_line(156, ng0);
    t25 = (10 * 1000LL);
    t2 = (t0 + 4552);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t25);
    t12 = (t0 + 4552);
    xsi_driver_intertial_reject(t12, t25, t25);
    goto LAB36;

LAB38:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4732);
    t7 = (t2 + 32U);
    t11 = *((char **)t7);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB30;

LAB40:    t2 = (t0 + 2892U);
    t6 = *((char **)t2);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB42;

}


extern void work_a_3162539210_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3162539210_3212880686_p_0,(void *)work_a_3162539210_3212880686_p_1,(void *)work_a_3162539210_3212880686_p_2};
	xsi_register_didat("work_a_3162539210_3212880686", "isim/Arbiter_isim_beh.exe.sim/work/a_3162539210_3212880686.didat");
	xsi_register_executes(pe);
}
