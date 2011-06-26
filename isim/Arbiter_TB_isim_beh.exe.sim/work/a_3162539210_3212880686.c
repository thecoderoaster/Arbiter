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


static void work_a_3162539210_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(94, ng0);
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
LAB3:    t1 = (t0 + 5672);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 11446);
    t6 = (t0 + 5740);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 5776);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(97, ng0);
    t11 = (1 * 1000LL);
    t1 = (t0 + 11450);
    t5 = (t0 + 5812);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_delta(t5, 0U, 16U, t11);
    t10 = (t0 + 5812);
    xsi_driver_intertial_reject(t10, t11, t11);
    goto LAB3;

LAB5:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3720U);
    t5 = *((char **)t2);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 3720U);
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

LAB7:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3076U);
    t7 = *((char **)t2);
    t2 = (t0 + 11048U);
    t8 = (t0 + 11466);
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
    t21 = (t0 + 5812);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    memcpy(t25, t18, 16U);
    xsi_driver_first_trans_fast(t21);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 5776);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 3076U);
    t2 = *((char **)t1);
    t1 = (t0 + 11048U);
    t5 = (t0 + 11482);
    t7 = (t16 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 11;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t19 = (11 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t20;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t16);
    if (t3 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB8;

LAB10:    t2 = (t0 + 3812U);
    t6 = *((char **)t2);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)2);
    t4 = t15;
    goto LAB12;

LAB13:    xsi_set_current_line(104, ng0);
    t8 = (t0 + 3168U);
    t9 = *((char **)t8);
    t8 = (t0 + 11064U);
    t10 = (t0 + 11494);
    t21 = (t26 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 3;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t27 = (3 - 0);
    t20 = (t27 * 1);
    t20 = (t20 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t20;
    t22 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t17, t9, t8, t10, t26);
    t23 = (t0 + 5740);
    t24 = (t23 + 32U);
    t25 = *((char **)t24);
    t28 = (t25 + 40U);
    t29 = *((char **)t28);
    memcpy(t29, t22, 4U);
    xsi_driver_first_trans_fast(t23);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t1 = (t0 + 11064U);
    t5 = (t0 + 3536U);
    t6 = *((char **)t5);
    t5 = (t0 + 11128U);
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB16;

LAB18:
LAB17:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 11502);
    t5 = (t0 + 5812);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    goto LAB14;

LAB16:    xsi_set_current_line(106, ng0);
    t7 = (t0 + 11498);
    t9 = (t0 + 5740);
    t10 = (t9 + 32U);
    t18 = *((char **)t10);
    t21 = (t18 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t7, 4U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 5776);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 5776);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB21:    t1 = (t0 + 3812U);
    t5 = *((char **)t1);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t3 = t14;
    goto LAB23;

}

static void work_a_3162539210_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 5188U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(121, ng0);

LAB6:    t2 = (t0 + 5680);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 5680);
    *((int *)t5) = 0;
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 5848);
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

static void work_a_3162539210_3212880686_p_2(char *t0)
{
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
    char *t22;
    char *t23;
    char *t24;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9};

LAB0:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 2708U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5688);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(129, ng0);
    t4 = (t0 + 5884);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB4:    xsi_set_current_line(132, ng0);
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
LAB12:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 5884);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(145, ng0);
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
LAB18:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 5884);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(158, ng0);
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
LAB24:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 5884);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(171, ng0);
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
LAB30:    xsi_set_current_line(181, ng0);
    t1 = (t0 + 5884);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(184, ng0);
    t1 = (t0 + 3352U);
    t2 = *((char **)t1);
    t1 = (t0 + 11096U);
    t4 = (t0 + 3260U);
    t5 = *((char **)t4);
    t4 = (t0 + 11080U);
    t9 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t2, t1, t5, t4);
    if (t9 == 1)
        goto LAB38;

LAB39:    t3 = (unsigned char)0;

LAB40:    if (t3 != 0)
        goto LAB35;

LAB37:    t1 = (t0 + 3352U);
    t2 = *((char **)t1);
    t1 = (t0 + 11096U);
    t4 = (t0 + 3260U);
    t5 = *((char **)t4);
    t4 = (t0 + 11080U);
    t9 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t2, t1, t5, t4);
    if (t9 == 1)
        goto LAB43;

LAB44:    t3 = (unsigned char)0;

LAB45:    if (t3 != 0)
        goto LAB41;

LAB42:    t1 = (t0 + 3352U);
    t2 = *((char **)t1);
    t1 = (t0 + 11096U);
    t4 = (t0 + 3260U);
    t5 = *((char **)t4);
    t4 = (t0 + 11080U);
    t9 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t4);
    if (t9 == 1)
        goto LAB48;

LAB49:    t3 = (unsigned char)0;

LAB50:    if (t3 != 0)
        goto LAB46;

LAB47:    xsi_set_current_line(194, ng0);
    t1 = (t0 + 5884);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB36:    goto LAB2;

LAB9:    xsi_set_current_line(198, ng0);
    t13 = (1 * 1000LL);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 6208);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 4U);
    xsi_driver_first_trans_delta(t1, 0U, 4U, t13);
    t8 = (t0 + 6208);
    xsi_driver_intertial_reject(t8, t13, t13);
    xsi_set_current_line(199, ng0);
    t13 = (1 * 1000LL);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 6244);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, t13);
    t8 = (t0 + 6244);
    xsi_driver_intertial_reject(t8, t13, t13);
    xsi_set_current_line(200, ng0);
    t1 = (t0 + 5884);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(202, ng0);
    t1 = (t0 + 5884);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 5920);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t14 = (t0 + 5920);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t13);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t19 = (39 - 19);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5956);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t19 = (39 - 3);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5992);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(140, ng0);
    t1 = (t0 + 6028);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t7 = (t0 + 6028);
    t8 = (t7 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t13);
    goto LAB12;

LAB14:    t1 = (t0 + 3996U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB16;

LAB17:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 6064);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t14 = (t0 + 6064);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t13);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t19 = (39 - 19);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5956);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t19 = (39 - 3);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5992);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(153, ng0);
    t1 = (t0 + 6028);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t7 = (t0 + 6028);
    t8 = (t7 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t13);
    goto LAB18;

LAB20:    t1 = (t0 + 3996U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB22;

LAB23:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 6100);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t14 = (t0 + 6100);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t13);
    xsi_set_current_line(162, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t19 = (39 - 19);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5956);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(164, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t19 = (39 - 3);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5992);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(166, ng0);
    t1 = (t0 + 6028);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t7 = (t0 + 6028);
    t8 = (t7 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t13);
    goto LAB24;

LAB26:    t1 = (t0 + 3996U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB28;

LAB29:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 6136);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t14 = (t0 + 6136);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t13);
    xsi_set_current_line(175, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t19 = (39 - 19);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5956);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(177, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t19 = (39 - 3);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5992);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(179, ng0);
    t1 = (t0 + 6028);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t7 = (t0 + 6028);
    t8 = (t7 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t13);
    goto LAB30;

LAB32:    t1 = (t0 + 3996U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB34;

LAB35:    xsi_set_current_line(185, ng0);
    t6 = (t0 + 6172);
    t8 = (t6 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t17 = (t0 + 6172);
    t18 = (t17 + 32U);
    t22 = *((char **)t18);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t13);
    xsi_set_current_line(186, ng0);
    t1 = (t0 + 5884);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB38:    t6 = (t0 + 3720U);
    t7 = *((char **)t6);
    t10 = *((unsigned char *)t7);
    t11 = (t10 == (unsigned char)2);
    t3 = t11;
    goto LAB40;

LAB41:    xsi_set_current_line(188, ng0);
    t6 = (t0 + 6172);
    t8 = (t6 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t17 = (t0 + 6172);
    t18 = (t17 + 32U);
    t22 = *((char **)t18);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t13);
    xsi_set_current_line(189, ng0);
    t1 = (t0 + 5884);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB43:    t6 = (t0 + 3720U);
    t7 = *((char **)t6);
    t10 = *((unsigned char *)t7);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB45;

LAB46:    xsi_set_current_line(191, ng0);
    t6 = (t0 + 6172);
    t8 = (t6 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    t13 = (1 * 1000LL);
    t17 = (t0 + 6172);
    t18 = (t17 + 32U);
    t22 = *((char **)t18);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t13);
    xsi_set_current_line(192, ng0);
    t1 = (t0 + 5884);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB48:    t6 = (t0 + 3720U);
    t7 = *((char **)t6);
    t10 = *((unsigned char *)t7);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB50;

}

static void work_a_3162539210_3212880686_p_3(char *t0)
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

LAB0:    xsi_set_current_line(208, ng0);
    t1 = (t0 + 4180U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 4088U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB8;

LAB9:
LAB3:    t1 = (t0 + 5696);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(209, ng0);
    t1 = (t0 + 3260U);
    t5 = *((char **)t1);
    t1 = (t0 + 6280);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(210, ng0);
    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    t1 = (t0 + 6316);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 6352);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(212, ng0);
    t1 = (t0 + 6388);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t10 = (1 * 1000LL);
    t8 = (t0 + 6388);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t10);
    xsi_set_current_line(213, ng0);
    t1 = (t0 + 2892U);
    t2 = *((char **)t1);
    t1 = (t0 + 6424);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(214, ng0);
    t1 = (t0 + 6460);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t10 = (1 * 1000LL);
    t8 = (t0 + 6460);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t10);
    xsi_set_current_line(215, ng0);
    t1 = (t0 + 6352);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(216, ng0);
    t1 = (t0 + 3260U);
    t2 = *((char **)t1);
    t1 = (t0 + 11080U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t0 + 6496);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t5, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(217, ng0);
    t1 = (t0 + 3444U);
    t2 = *((char **)t1);
    t1 = (t0 + 11112U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t0 + 6532);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t5, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(218, ng0);
    t1 = (t0 + 3444U);
    t2 = *((char **)t1);
    t1 = (t0 + 11112U);
    t5 = (t0 + 11518);
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

LAB5:    xsi_set_current_line(219, ng0);
    t8 = (t0 + 6568);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(223, ng0);
    t1 = (t0 + 3352U);
    t5 = *((char **)t1);
    t1 = (t0 + 11096U);
    t6 = (t0 + 3260U);
    t7 = *((char **)t6);
    t6 = (t0 + 11080U);
    t18 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t5, t1, t7, t6);
    if (t18 == 1)
        goto LAB13;

LAB14:    t17 = (unsigned char)0;

LAB15:    if (t17 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 3352U);
    t2 = *((char **)t1);
    t1 = (t0 + 11096U);
    t5 = (t0 + 3260U);
    t6 = *((char **)t5);
    t5 = (t0 + 11080U);
    t4 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t4 == 1)
        goto LAB18;

LAB19:    t3 = (unsigned char)0;

LAB20:    if (t3 != 0)
        goto LAB16;

LAB17:    t1 = (t0 + 3352U);
    t2 = *((char **)t1);
    t1 = (t0 + 11096U);
    t5 = (t0 + 3260U);
    t6 = *((char **)t5);
    t5 = (t0 + 11080U);
    t4 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t4 == 1)
        goto LAB26;

LAB27:    t3 = (unsigned char)0;

LAB28:    if (t3 != 0)
        goto LAB24;

LAB25:
LAB11:    goto LAB3;

LAB10:    xsi_set_current_line(224, ng0);
    t8 = (t0 + 3352U);
    t11 = *((char **)t8);
    t8 = (t0 + 6280);
    t12 = (t8 + 32U);
    t13 = *((char **)t12);
    t21 = (t13 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t11, 4U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(225, ng0);
    t1 = (t0 + 6352);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(226, ng0);
    t1 = (t0 + 6388);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t10 = (1 * 1000LL);
    t8 = (t0 + 6388);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t10);
    xsi_set_current_line(227, ng0);
    t1 = (t0 + 6460);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t10 = (1 * 1000LL);
    t8 = (t0 + 6460);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t10);
    xsi_set_current_line(228, ng0);
    t1 = (t0 + 3352U);
    t2 = *((char **)t1);
    t1 = (t0 + 11096U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t0 + 6604);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t5, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(229, ng0);
    t1 = (t0 + 3444U);
    t2 = *((char **)t1);
    t1 = (t0 + 11112U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t0 + 6532);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t5, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(230, ng0);
    t1 = (t0 + 6640);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB13:    t8 = (t0 + 3720U);
    t9 = *((char **)t8);
    t19 = *((unsigned char *)t9);
    t20 = (t19 == (unsigned char)2);
    t17 = t20;
    goto LAB15;

LAB16:    xsi_set_current_line(232, ng0);
    t7 = (t0 + 3812U);
    t9 = *((char **)t7);
    t19 = *((unsigned char *)t9);
    t20 = (t19 == (unsigned char)3);
    if (t20 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB11;

LAB18:    t7 = (t0 + 3720U);
    t8 = *((char **)t7);
    t17 = *((unsigned char *)t8);
    t18 = (t17 == (unsigned char)3);
    t3 = t18;
    goto LAB20;

LAB21:    xsi_set_current_line(233, ng0);
    t7 = (t0 + 6640);
    t11 = (t7 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t21 = *((char **)t13);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB22;

LAB24:    xsi_set_current_line(237, ng0);
    t7 = (t0 + 3812U);
    t9 = *((char **)t7);
    t19 = *((unsigned char *)t9);
    t20 = (t19 == (unsigned char)3);
    if (t20 != 0)
        goto LAB29;

LAB31:
LAB30:    goto LAB11;

LAB26:    t7 = (t0 + 3720U);
    t8 = *((char **)t7);
    t17 = *((unsigned char *)t8);
    t18 = (t17 == (unsigned char)3);
    t3 = t18;
    goto LAB28;

LAB29:    xsi_set_current_line(238, ng0);
    t7 = (t0 + 6640);
    t11 = (t7 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t21 = *((char **)t13);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB30;

}


extern void work_a_3162539210_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3162539210_3212880686_p_0,(void *)work_a_3162539210_3212880686_p_1,(void *)work_a_3162539210_3212880686_p_2,(void *)work_a_3162539210_3212880686_p_3};
	xsi_register_didat("work_a_3162539210_3212880686", "isim/Arbiter_TB_isim_beh.exe.sim/work/a_3162539210_3212880686.didat");
	xsi_register_executes(pe);
}
