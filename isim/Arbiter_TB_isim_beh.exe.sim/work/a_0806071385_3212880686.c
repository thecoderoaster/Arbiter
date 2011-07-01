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
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0806071385_3212880686_p_0(char *t0)
{
    char t12[16];
    char t13[16];
    char t20[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int64 t11;
    int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 568U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6068);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 12430);
    t6 = (t0 + 6144);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(98, ng0);
    t11 = (1 * 1000LL);
    t1 = (t0 + 12462);
    t5 = (t0 + 6180);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_delta(t5, 0U, 16U, t11);
    t10 = (t0 + 6180);
    xsi_driver_intertial_reject(t10, t11, t11);
    goto LAB3;

LAB5:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3352U);
    t5 = *((char **)t2);
    t2 = (t0 + 11852U);
    t6 = (t0 + 12478);
    t8 = (t13 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 15;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t14 = (15 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t15;
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t5, t2, t6, t13);
    t10 = (t0 + 6180);
    t16 = (t10 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 16U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 3352U);
    t2 = *((char **)t1);
    t1 = (t0 + 11852U);
    t5 = (t0 + 12494);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 11;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t14 = (11 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t15;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(103, ng0);
    t8 = (t0 + 3076U);
    t9 = *((char **)t8);
    t8 = (t0 + 11804U);
    t10 = (t0 + 12506);
    t17 = (t20 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = 31;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t21 = (31 - 0);
    t15 = (t21 * 1);
    t15 = (t15 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t15;
    t18 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t13, t9, t8, t10, t20);
    t19 = (t0 + 6144);
    t22 = (t19 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    memcpy(t25, t18, 32U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 12538);
    t5 = (t0 + 6180);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    goto LAB8;

}

static void work_a_0806071385_3212880686_p_1(char *t0)
{
    char t16[16];
    char t17[16];
    char t26[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int64 t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    int t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 568U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6076);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 12554);
    t6 = (t0 + 6216);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 6252);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(118, ng0);
    t11 = (1 * 1000LL);
    t1 = (t0 + 12586);
    t5 = (t0 + 6288);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_delta(t5, 0U, 16U, t11);
    t10 = (t0 + 6288);
    xsi_driver_intertial_reject(t10, t11, t11);
    goto LAB3;

LAB5:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3904U);
    t5 = *((char **)t2);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 3904U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t12 = (t4 == (unsigned char)2);
    if (t12 == 1)
        goto LAB21;

LAB22:    t3 = (unsigned char)0;

LAB23:    if (t3 != 0)
        goto LAB19;

LAB20:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3444U);
    t7 = *((char **)t2);
    t2 = (t0 + 11868U);
    t8 = (t0 + 12602);
    t10 = (t17 + 0U);
    t18 = (t10 + 0U);
    *((int *)t18) = 0;
    t18 = (t10 + 4U);
    *((int *)t18) = 15;
    t18 = (t10 + 8U);
    *((int *)t18) = 1;
    t19 = (15 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t18 = (t10 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t16, t7, t2, t8, t17);
    t21 = (t0 + 6288);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    memcpy(t25, t18, 16U);
    xsi_driver_first_trans_fast(t21);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 6252);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 3444U);
    t2 = *((char **)t1);
    t1 = (t0 + 11868U);
    t5 = (t0 + 12618);
    t7 = (t16 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 15;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t19 = (15 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t20;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t16);
    if (t3 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB8;

LAB10:    t2 = (t0 + 3996U);
    t6 = *((char **)t2);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)2);
    t4 = t15;
    goto LAB12;

LAB13:    xsi_set_current_line(125, ng0);
    t8 = (t0 + 3168U);
    t9 = *((char **)t8);
    t8 = (t0 + 11820U);
    t10 = (t0 + 12634);
    t21 = (t26 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 31;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t27 = (31 - 0);
    t20 = (t27 * 1);
    t20 = (t20 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t20;
    t22 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t17, t9, t8, t10, t26);
    t23 = (t0 + 6216);
    t24 = (t23 + 32U);
    t25 = *((char **)t24);
    t28 = (t25 + 40U);
    t29 = *((char **)t28);
    memcpy(t29, t22, 32U);
    xsi_driver_first_trans_fast(t23);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t1 = (t0 + 11820U);
    t5 = (t0 + 3260U);
    t6 = *((char **)t5);
    t5 = (t0 + 11836U);
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB16;

LAB18:
LAB17:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 12698);
    t5 = (t0 + 6288);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    goto LAB14;

LAB16:    xsi_set_current_line(127, ng0);
    t7 = (t0 + 12666);
    t9 = (t0 + 6216);
    t10 = (t9 + 32U);
    t18 = *((char **)t10);
    t21 = (t18 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t7, 32U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 6252);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 6252);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB21:    t1 = (t0 + 3996U);
    t5 = *((char **)t1);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t3 = t14;
    goto LAB23;

}

static void work_a_0806071385_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 5584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(142, ng0);

LAB6:    t2 = (t0 + 6084);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 6084);
    *((int *)t5) = 0;
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 6324);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB5:    t3 = (t0 + 568U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

}

static void work_a_0806071385_3212880686_p_3(char *t0)
{
    char t22[16];
    char t24[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    int64 t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    int t23;
    int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9};

LAB0:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 2708U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 6092);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(150, ng0);
    t4 = (t0 + 6360);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB4:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t9 = *((unsigned char *)t2);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB14;

LAB15:    t3 = (unsigned char)0;

LAB16:    if (t3 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 6360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 1880U);
    t2 = *((char **)t1);
    t9 = *((unsigned char *)t2);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB20;

LAB21:    t3 = (unsigned char)0;

LAB22:    if (t3 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(176, ng0);
    t1 = (t0 + 6360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(179, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t9 = *((unsigned char *)t2);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB26;

LAB27:    t3 = (unsigned char)0;

LAB28:    if (t3 != 0)
        goto LAB23;

LAB25:
LAB24:    xsi_set_current_line(189, ng0);
    t1 = (t0 + 6360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(192, ng0);
    t1 = (t0 + 2432U);
    t2 = *((char **)t1);
    t9 = *((unsigned char *)t2);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB32;

LAB33:    t3 = (unsigned char)0;

LAB34:    if (t3 != 0)
        goto LAB29;

LAB31:
LAB30:    xsi_set_current_line(202, ng0);
    t1 = (t0 + 6360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(205, ng0);
    t1 = (t0 + 3628U);
    t2 = *((char **)t1);
    t1 = (t0 + 11900U);
    t4 = (t0 + 3536U);
    t5 = *((char **)t4);
    t4 = (t0 + 11884U);
    t9 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t2, t1, t5, t4);
    if (t9 == 1)
        goto LAB38;

LAB39:    t3 = (unsigned char)0;

LAB40:    if (t3 != 0)
        goto LAB35;

LAB37:    t1 = (t0 + 3628U);
    t2 = *((char **)t1);
    t1 = (t0 + 11900U);
    t4 = (t0 + 3536U);
    t5 = *((char **)t4);
    t4 = (t0 + 11884U);
    t9 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t2, t1, t5, t4);
    if (t9 == 1)
        goto LAB43;

LAB44:    t3 = (unsigned char)0;

LAB45:    if (t3 != 0)
        goto LAB41;

LAB42:    t1 = (t0 + 3628U);
    t2 = *((char **)t1);
    t1 = (t0 + 11900U);
    t4 = (t0 + 3536U);
    t5 = *((char **)t4);
    t4 = (t0 + 11884U);
    t9 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t4);
    if (t9 == 1)
        goto LAB48;

LAB49:    t3 = (unsigned char)0;

LAB50:    if (t3 != 0)
        goto LAB46;

LAB47:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 6360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB36:    goto LAB2;

LAB9:    xsi_set_current_line(219, ng0);
    t13 = (1 * 1000LL);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 6684);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_delta(t1, 0U, 32U, t13);
    t8 = (t0 + 6684);
    xsi_driver_intertial_reject(t8, t13, t13);
    xsi_set_current_line(220, ng0);
    t13 = (1 * 1000LL);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 6720);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, t13);
    t8 = (t0 + 6720);
    xsi_driver_intertial_reject(t8, t13, t13);
    xsi_set_current_line(221, ng0);
    t1 = (t0 + 6360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(223, ng0);
    t1 = (t0 + 6360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 6396);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t14 = (t0 + 6396);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t13);
    xsi_set_current_line(157, ng0);
    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t19 = (47 - 15);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 6432);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(159, ng0);
    t1 = (t0 + 3076U);
    t2 = *((char **)t1);
    t1 = (t0 + 11804U);
    t4 = (t0 + 1696U);
    t5 = *((char **)t4);
    t23 = (48 - 1);
    t19 = (47 - t23);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t4 = (t5 + t21);
    t6 = (t24 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 47;
    t7 = (t6 + 4U);
    *((int *)t7) = 16;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t25 = (16 - 47);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t26;
    t7 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t22, t2, t1, t4, t24);
    t8 = (t0 + 6468);
    t14 = (t8 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 32U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 6504);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t7 = (t0 + 6504);
    t8 = (t7 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t13);
    goto LAB12;

LAB14:    t1 = (t0 + 4180U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB16;

LAB17:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 6540);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t14 = (t0 + 6540);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t13);
    xsi_set_current_line(170, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t19 = (47 - 15);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 6432);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(172, ng0);
    t1 = (t0 + 3076U);
    t2 = *((char **)t1);
    t1 = (t0 + 11804U);
    t4 = (t0 + 1972U);
    t5 = *((char **)t4);
    t23 = (48 - 1);
    t19 = (47 - t23);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t4 = (t5 + t21);
    t6 = (t24 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 47;
    t7 = (t6 + 4U);
    *((int *)t7) = 16;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t25 = (16 - 47);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t26;
    t7 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t22, t2, t1, t4, t24);
    t8 = (t0 + 6468);
    t14 = (t8 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 32U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(174, ng0);
    t1 = (t0 + 6504);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t7 = (t0 + 6504);
    t8 = (t7 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t13);
    goto LAB18;

LAB20:    t1 = (t0 + 4180U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB22;

LAB23:    xsi_set_current_line(181, ng0);
    t1 = (t0 + 6576);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t14 = (t0 + 6576);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t13);
    xsi_set_current_line(183, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t19 = (47 - 15);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 6432);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(185, ng0);
    t1 = (t0 + 3076U);
    t2 = *((char **)t1);
    t1 = (t0 + 11804U);
    t4 = (t0 + 2248U);
    t5 = *((char **)t4);
    t23 = (48 - 1);
    t19 = (47 - t23);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t4 = (t5 + t21);
    t6 = (t24 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 47;
    t7 = (t6 + 4U);
    *((int *)t7) = 16;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t25 = (16 - 47);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t26;
    t7 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t22, t2, t1, t4, t24);
    t8 = (t0 + 6468);
    t14 = (t8 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 32U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(187, ng0);
    t1 = (t0 + 6504);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t7 = (t0 + 6504);
    t8 = (t7 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t13);
    goto LAB24;

LAB26:    t1 = (t0 + 4180U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB28;

LAB29:    xsi_set_current_line(194, ng0);
    t1 = (t0 + 6612);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t14 = (t0 + 6612);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t13);
    xsi_set_current_line(196, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t19 = (47 - 15);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 6432);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(198, ng0);
    t1 = (t0 + 3076U);
    t2 = *((char **)t1);
    t1 = (t0 + 11804U);
    t4 = (t0 + 2524U);
    t5 = *((char **)t4);
    t23 = (48 - 1);
    t19 = (47 - t23);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t4 = (t5 + t21);
    t6 = (t24 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 47;
    t7 = (t6 + 4U);
    *((int *)t7) = 16;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t25 = (16 - 47);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t26;
    t7 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t22, t2, t1, t4, t24);
    t8 = (t0 + 6468);
    t14 = (t8 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 32U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(200, ng0);
    t1 = (t0 + 6504);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t7 = (t0 + 6504);
    t8 = (t7 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t13);
    goto LAB30;

LAB32:    t1 = (t0 + 4180U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB34;

LAB35:    xsi_set_current_line(206, ng0);
    t6 = (t0 + 6648);
    t8 = (t6 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t17 = (t0 + 6648);
    t18 = (t17 + 32U);
    t27 = *((char **)t18);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t13);
    xsi_set_current_line(207, ng0);
    t1 = (t0 + 6360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB38:    t6 = (t0 + 3904U);
    t7 = *((char **)t6);
    t10 = *((unsigned char *)t7);
    t11 = (t10 == (unsigned char)2);
    t3 = t11;
    goto LAB40;

LAB41:    xsi_set_current_line(209, ng0);
    t6 = (t0 + 6648);
    t8 = (t6 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t17 = (t0 + 6648);
    t18 = (t17 + 32U);
    t27 = *((char **)t18);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t13);
    xsi_set_current_line(210, ng0);
    t1 = (t0 + 6360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB43:    t6 = (t0 + 3904U);
    t7 = *((char **)t6);
    t10 = *((unsigned char *)t7);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB45;

LAB46:    xsi_set_current_line(212, ng0);
    t6 = (t0 + 6648);
    t8 = (t6 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t17 = (t0 + 6648);
    t18 = (t17 + 32U);
    t27 = *((char **)t18);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t13);
    xsi_set_current_line(213, ng0);
    t1 = (t0 + 6360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB48:    t6 = (t0 + 3904U);
    t7 = *((char **)t6);
    t10 = *((unsigned char *)t7);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB50;

}

static void work_a_0806071385_3212880686_p_4(char *t0)
{
    char t14[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    char *t11;
    char *t12;
    char *t13;
    int t15;
    unsigned int t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(229, ng0);
    t1 = (t0 + 4364U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 4272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB8;

LAB9:
LAB3:    t1 = (t0 + 6100);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(230, ng0);
    t1 = (t0 + 3536U);
    t5 = *((char **)t1);
    t1 = (t0 + 6756);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(231, ng0);
    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    t1 = (t0 + 6792);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(232, ng0);
    t1 = (t0 + 6828);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(233, ng0);
    t1 = (t0 + 6864);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t10 = (1 * 1000LL);
    t8 = (t0 + 6864);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t10);
    xsi_set_current_line(234, ng0);
    t1 = (t0 + 2892U);
    t2 = *((char **)t1);
    t1 = (t0 + 6900);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(235, ng0);
    t1 = (t0 + 6936);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t10 = (1 * 1000LL);
    t8 = (t0 + 6936);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t10);
    xsi_set_current_line(236, ng0);
    t1 = (t0 + 6828);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(237, ng0);
    t1 = (t0 + 3536U);
    t2 = *((char **)t1);
    t1 = (t0 + 11884U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t0 + 6972);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t5, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(238, ng0);
    t1 = (t0 + 3720U);
    t2 = *((char **)t1);
    t1 = (t0 + 11916U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t0 + 7008);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t5, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(239, ng0);
    t1 = (t0 + 3720U);
    t2 = *((char **)t1);
    t1 = (t0 + 11916U);
    t5 = (t0 + 12714);
    t7 = (t14 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t16;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t14);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(240, ng0);
    t8 = (t0 + 7044);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(244, ng0);
    t1 = (t0 + 3628U);
    t5 = *((char **)t1);
    t1 = (t0 + 11900U);
    t6 = (t0 + 3536U);
    t7 = *((char **)t6);
    t6 = (t0 + 11884U);
    t18 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t5, t1, t7, t6);
    if (t18 == 1)
        goto LAB13;

LAB14:    t17 = (unsigned char)0;

LAB15:    if (t17 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 3628U);
    t2 = *((char **)t1);
    t1 = (t0 + 11900U);
    t5 = (t0 + 3536U);
    t6 = *((char **)t5);
    t5 = (t0 + 11884U);
    t4 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t4 == 1)
        goto LAB18;

LAB19:    t3 = (unsigned char)0;

LAB20:    if (t3 != 0)
        goto LAB16;

LAB17:    t1 = (t0 + 3628U);
    t2 = *((char **)t1);
    t1 = (t0 + 11900U);
    t5 = (t0 + 3536U);
    t6 = *((char **)t5);
    t5 = (t0 + 11884U);
    t4 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t4 == 1)
        goto LAB26;

LAB27:    t3 = (unsigned char)0;

LAB28:    if (t3 != 0)
        goto LAB24;

LAB25:
LAB11:    goto LAB3;

LAB10:    xsi_set_current_line(245, ng0);
    t8 = (t0 + 3628U);
    t11 = *((char **)t8);
    t8 = (t0 + 6756);
    t12 = (t8 + 32U);
    t13 = *((char **)t12);
    t21 = (t13 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t11, 4U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(246, ng0);
    t1 = (t0 + 6828);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(247, ng0);
    t1 = (t0 + 6864);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t10 = (1 * 1000LL);
    t8 = (t0 + 6864);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t10);
    xsi_set_current_line(248, ng0);
    t1 = (t0 + 6936);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t10 = (1 * 1000LL);
    t8 = (t0 + 6936);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t10);
    xsi_set_current_line(249, ng0);
    t1 = (t0 + 3628U);
    t2 = *((char **)t1);
    t1 = (t0 + 11900U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t0 + 7080);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t5, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(250, ng0);
    t1 = (t0 + 3720U);
    t2 = *((char **)t1);
    t1 = (t0 + 11916U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t0 + 7008);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t5, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(251, ng0);
    t1 = (t0 + 7116);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB13:    t8 = (t0 + 3904U);
    t9 = *((char **)t8);
    t19 = *((unsigned char *)t9);
    t20 = (t19 == (unsigned char)2);
    t17 = t20;
    goto LAB15;

LAB16:    xsi_set_current_line(253, ng0);
    t7 = (t0 + 3996U);
    t9 = *((char **)t7);
    t19 = *((unsigned char *)t9);
    t20 = (t19 == (unsigned char)3);
    if (t20 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB11;

LAB18:    t7 = (t0 + 3904U);
    t8 = *((char **)t7);
    t17 = *((unsigned char *)t8);
    t18 = (t17 == (unsigned char)3);
    t3 = t18;
    goto LAB20;

LAB21:    xsi_set_current_line(254, ng0);
    t7 = (t0 + 7116);
    t11 = (t7 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t21 = *((char **)t13);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB22;

LAB24:    xsi_set_current_line(258, ng0);
    t7 = (t0 + 3996U);
    t9 = *((char **)t7);
    t19 = *((unsigned char *)t9);
    t20 = (t19 == (unsigned char)3);
    if (t20 != 0)
        goto LAB29;

LAB31:
LAB30:    goto LAB11;

LAB26:    t7 = (t0 + 3904U);
    t8 = *((char **)t7);
    t17 = *((unsigned char *)t8);
    t18 = (t17 == (unsigned char)3);
    t3 = t18;
    goto LAB28;

LAB29:    xsi_set_current_line(259, ng0);
    t7 = (t0 + 7116);
    t11 = (t7 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t21 = *((char **)t13);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB30;

}


extern void work_a_0806071385_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0806071385_3212880686_p_0,(void *)work_a_0806071385_3212880686_p_1,(void *)work_a_0806071385_3212880686_p_2,(void *)work_a_0806071385_3212880686_p_3,(void *)work_a_0806071385_3212880686_p_4};
	xsi_register_didat("work_a_0806071385_3212880686", "isim/Arbiter_TB_isim_beh.exe.sim/work/a_0806071385_3212880686.didat");
	xsi_register_executes(pe);
}
