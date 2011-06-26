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
unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3162539210_3212880686_p_0(char *t0)
{
    char t13[16];
    char t14[16];
    char t22[16];
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

LAB0:    xsi_set_current_line(92, ng0);
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
LAB3:    t1 = (t0 + 5580);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 11120);
    t6 = (t0 + 5648);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(94, ng0);
    t11 = (1 * 1000LL);
    t1 = (t0 + 11124);
    t5 = (t0 + 5684);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_delta(t5, 0U, 16U, t11);
    t10 = (t0 + 5684);
    xsi_driver_intertial_reject(t10, t11, t11);
    goto LAB3;

LAB5:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3168U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t12 = (t4 == (unsigned char)3);
    if (t12 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2984U);
    t6 = *((char **)t2);
    t2 = (t0 + 10752U);
    t7 = (t0 + 11140);
    t9 = (t14 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 15;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t15 = (15 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t16;
    t10 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t13, t6, t2, t7, t14);
    t17 = (t0 + 5684);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t10, 16U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    t1 = (t0 + 10752U);
    t5 = (t0 + 11156);
    t7 = (t13 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 11;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t15 = (11 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t16;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t13);
    if (t3 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(100, ng0);
    t8 = (t0 + 3076U);
    t9 = *((char **)t8);
    t8 = (t0 + 10768U);
    t10 = (t0 + 11168);
    t18 = (t22 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 3;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t23 = (3 - 0);
    t16 = (t23 * 1);
    t16 = (t16 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t16;
    t19 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t14, t9, t8, t10, t22);
    t20 = (t0 + 5648);
    t21 = (t20 + 32U);
    t24 = *((char **)t21);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t19, 4U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 11172);
    t5 = (t0 + 5684);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    goto LAB11;

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

LAB0:    t1 = (t0 + 5096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);

LAB6:    t2 = (t0 + 5588);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 5588);
    *((int *)t5) = 0;
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 5720);
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
    int64 t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8};

LAB0:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 3996U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5596);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(125, ng0);
    t4 = (t0 + 5756);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    t9 = (1 * 1000LL);
    t10 = (t0 + 5756);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t10, 0U, 1, t9);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 5792);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t15 = *((unsigned char *)t2);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB12;

LAB13:    t3 = (unsigned char)0;

LAB14:    if (t3 != 0)
        goto LAB9;

LAB11:
LAB10:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 5792);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 1880U);
    t2 = *((char **)t1);
    t15 = *((unsigned char *)t2);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB18;

LAB19:    t3 = (unsigned char)0;

LAB20:    if (t3 != 0)
        goto LAB15;

LAB17:
LAB16:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 5792);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t15 = *((unsigned char *)t2);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB24;

LAB25:    t3 = (unsigned char)0;

LAB26:    if (t3 != 0)
        goto LAB21;

LAB23:
LAB22:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 5792);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 2432U);
    t2 = *((char **)t1);
    t15 = *((unsigned char *)t2);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB30;

LAB31:    t3 = (unsigned char)0;

LAB32:    if (t3 != 0)
        goto LAB27;

LAB29:
LAB28:    xsi_set_current_line(178, ng0);
    t1 = (t0 + 5792);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 5792);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 5828);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t9 = (1 * 1000LL);
    t10 = (t0 + 5828);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t10, 0U, 1, t9);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t19 = (39 - 19);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5864);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t19 = (39 - 3);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5900);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 5936);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t9 = (1 * 1000LL);
    t7 = (t0 + 5936);
    t8 = (t7 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t9);
    goto LAB10;

LAB12:    t1 = (t0 + 3720U);
    t4 = *((char **)t1);
    t17 = *((unsigned char *)t4);
    t18 = (t17 == (unsigned char)2);
    t3 = t18;
    goto LAB14;

LAB15:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 5972);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t9 = (1 * 1000LL);
    t10 = (t0 + 5972);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t10, 0U, 1, t9);
    xsi_set_current_line(146, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t19 = (39 - 19);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5864);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t19 = (39 - 3);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5900);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(150, ng0);
    t1 = (t0 + 5936);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t9 = (1 * 1000LL);
    t7 = (t0 + 5936);
    t8 = (t7 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t9);
    goto LAB16;

LAB18:    t1 = (t0 + 3720U);
    t4 = *((char **)t1);
    t17 = *((unsigned char *)t4);
    t18 = (t17 == (unsigned char)2);
    t3 = t18;
    goto LAB20;

LAB21:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 6008);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t9 = (1 * 1000LL);
    t10 = (t0 + 6008);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t10, 0U, 1, t9);
    xsi_set_current_line(159, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t19 = (39 - 19);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5864);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t19 = (39 - 3);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5900);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 5936);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t9 = (1 * 1000LL);
    t7 = (t0 + 5936);
    t8 = (t7 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t9);
    goto LAB22;

LAB24:    t1 = (t0 + 3720U);
    t4 = *((char **)t1);
    t17 = *((unsigned char *)t4);
    t18 = (t17 == (unsigned char)2);
    t3 = t18;
    goto LAB26;

LAB27:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 6044);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t9 = (1 * 1000LL);
    t10 = (t0 + 6044);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t10, 0U, 1, t9);
    xsi_set_current_line(172, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t19 = (39 - 19);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5864);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(174, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t19 = (39 - 3);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t4 = (t0 + 5900);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(176, ng0);
    t1 = (t0 + 5936);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t9 = (1 * 1000LL);
    t7 = (t0 + 5936);
    t8 = (t7 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t9);
    goto LAB28;

LAB30:    t1 = (t0 + 3720U);
    t4 = *((char **)t1);
    t17 = *((unsigned char *)t4);
    t18 = (t17 == (unsigned char)2);
    t3 = t18;
    goto LAB32;

}

static void work_a_3162539210_3212880686_p_3(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int64 t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;

LAB0:    xsi_set_current_line(186, ng0);
    t1 = (t0 + 3904U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 3812U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB8;

LAB9:
LAB3:    t1 = (t0 + 5604);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(187, ng0);
    t1 = (t0 + 3444U);
    t5 = *((char **)t1);
    t1 = (t0 + 10816U);
    t6 = (t0 + 11188);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (3 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t13 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t5, t1, t6, t8);
    if (t13 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(200, ng0);
    t1 = (t0 + 6368);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(188, ng0);
    t10 = (t0 + 3260U);
    t14 = *((char **)t10);
    t10 = (t0 + 6080);
    t15 = (t10 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t14, 4U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(189, ng0);
    t1 = (t0 + 2800U);
    t2 = *((char **)t1);
    t1 = (t0 + 6116);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(190, ng0);
    t1 = (t0 + 6152);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(191, ng0);
    t1 = (t0 + 6188);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(192, ng0);
    t1 = (t0 + 2708U);
    t2 = *((char **)t1);
    t1 = (t0 + 6224);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(193, ng0);
    t1 = (t0 + 6260);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(194, ng0);
    t1 = (t0 + 6152);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(195, ng0);
    t1 = (t0 + 3260U);
    t2 = *((char **)t1);
    t1 = (t0 + 10784U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t8, t2, t1, 1);
    t6 = (t0 + 6296);
    t7 = (t6 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(196, ng0);
    t1 = (t0 + 3444U);
    t2 = *((char **)t1);
    t1 = (t0 + 10816U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t8, t2, t1, 1);
    t6 = (t0 + 6332);
    t7 = (t6 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(197, ng0);
    t19 = (2 * 1000LL);
    t1 = (t0 + 6260);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, t19);
    t9 = (t0 + 6260);
    xsi_driver_intertial_reject(t9, t19, t19);
    xsi_set_current_line(198, ng0);
    t19 = (2 * 1000LL);
    t1 = (t0 + 6188);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, t19);
    t9 = (t0 + 6188);
    xsi_driver_intertial_reject(t9, t19, t19);
    goto LAB6;

LAB8:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 3352U);
    t5 = *((char **)t1);
    t1 = (t0 + 10800U);
    t6 = (t0 + 3260U);
    t7 = *((char **)t6);
    t6 = (t0 + 10784U);
    t20 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t5, t1, t7, t6);
    if (t20 == 1)
        goto LAB13;

LAB14:    t13 = (unsigned char)0;

LAB15:    if (t13 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB10:    xsi_set_current_line(204, ng0);
    t9 = (t0 + 3352U);
    t14 = *((char **)t9);
    t9 = (t0 + 6080);
    t15 = (t9 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t14, 4U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(205, ng0);
    t1 = (t0 + 6152);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(206, ng0);
    t1 = (t0 + 6188);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(207, ng0);
    t19 = (1 * 1000LL);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 6404);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_delta(t1, 0U, 4U, t19);
    t10 = (t0 + 6404);
    xsi_driver_intertial_reject(t10, t19, t19);
    xsi_set_current_line(208, ng0);
    t1 = (t0 + 3352U);
    t2 = *((char **)t1);
    t1 = (t0 + 10800U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t8, t2, t1, 1);
    t6 = (t0 + 6440);
    t7 = (t6 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(209, ng0);
    t1 = (t0 + 3444U);
    t2 = *((char **)t1);
    t1 = (t0 + 10816U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t8, t2, t1, 1);
    t6 = (t0 + 6332);
    t7 = (t6 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(210, ng0);
    t1 = (t0 + 6476);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(211, ng0);
    t19 = (1 * 1000LL);
    t1 = (t0 + 6188);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, t19);
    t9 = (t0 + 6188);
    xsi_driver_intertial_reject(t9, t19, t19);
    goto LAB11;

LAB13:    t9 = (t0 + 3168U);
    t10 = *((char **)t9);
    t21 = *((unsigned char *)t10);
    t22 = (t21 == (unsigned char)2);
    t13 = t22;
    goto LAB15;

}


extern void work_a_3162539210_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3162539210_3212880686_p_0,(void *)work_a_3162539210_3212880686_p_1,(void *)work_a_3162539210_3212880686_p_2,(void *)work_a_3162539210_3212880686_p_3};
	xsi_register_didat("work_a_3162539210_3212880686", "isim/Arbiter_TB_isim_beh.exe.sim/work/a_3162539210_3212880686.didat");
	xsi_register_executes(pe);
}
