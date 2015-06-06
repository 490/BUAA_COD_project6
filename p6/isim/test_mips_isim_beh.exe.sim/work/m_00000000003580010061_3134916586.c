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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/dell/Desktop/BUAA2/PROJECT/P6-VerilogHDL-pipeline_CPU-V2/p6/ext_load.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {24, 0};
static int ng6[] = {1, 0};
static int ng7[] = {0, 0};
static unsigned int ng8[] = {4U, 0U};
static int ng9[] = {16, 0};



static void Always_28_0(char *t0)
{
    char t10[8];
    char t11[8];
    char t21[8];
    char t24[8];
    char t35[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t38;
    char *t39;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB17;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);

LAB18:    t3 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 2);
    if (t9 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB17;

LAB11:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);

LAB28:    t3 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 2, t3, 2);
    if (t9 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB17;

LAB13:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t8 = *((char **)t3);
    t3 = (t0 + 1008U);
    t12 = (t3 + 72U);
    t19 = *((char **)t12);
    t20 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t8, t19, 2, t20, 32, 1);

LAB38:    t22 = ((char*)((ng7)));
    t9 = xsi_vlog_unsigned_case_compare(t10, 32, t22, 32);
    if (t9 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t10, 32, t2, 32);
    if (t6 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB17;

LAB15:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1048U);
    t8 = *((char **)t3);
    t3 = (t0 + 1008U);
    t12 = (t3 + 72U);
    t19 = *((char **)t12);
    t20 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t11, 32, t8, t19, 2, t20, 32, 1);

LAB44:    t22 = ((char*)((ng7)));
    t9 = xsi_vlog_unsigned_case_compare(t11, 32, t22, 32);
    if (t9 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t11, 32, t2, 32);
    if (t6 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB17;

LAB19:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    t7 = (t11 + 4);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t18 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t18 & 255U);
    t19 = ((char*)((ng1)));
    xsi_vlogtype_concat(t10, 32, 32, 2U, t19, 24, t11, 8);
    t20 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t20, t10, 0, 0, 32, 0LL);
    goto LAB27;

LAB21:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t8 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 8);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 8);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 255U);
    t12 = ((char*)((ng1)));
    xsi_vlogtype_concat(t10, 32, 32, 2U, t12, 24, t11, 8);
    t19 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t19, t10, 0, 0, 32, 0LL);
    goto LAB27;

LAB23:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t8 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 16);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 16);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 255U);
    t12 = ((char*)((ng1)));
    xsi_vlogtype_concat(t10, 32, 32, 2U, t12, 24, t11, 8);
    t19 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t19, t10, 0, 0, 32, 0LL);
    goto LAB27;

LAB25:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t8 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 24);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 24);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 255U);
    t12 = ((char*)((ng1)));
    xsi_vlogtype_concat(t10, 32, 32, 2U, t12, 24, t11, 8);
    t19 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t19, t10, 0, 0, 32, 0LL);
    goto LAB27;

LAB29:    xsi_set_current_line(41, ng0);
    t8 = (t0 + 1208U);
    t12 = *((char **)t8);
    memset(t11, 0, 8);
    t8 = (t11 + 4);
    t19 = (t12 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (t13 >> 0);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t19);
    t16 = (t15 >> 0);
    *((unsigned int *)t8) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 255U);
    t20 = ((char*)((ng5)));
    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    t22 = (t24 + 4);
    t25 = (t23 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 7);
    t28 = (t27 & 1);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 7);
    t31 = (t30 & 1);
    *((unsigned int *)t22) = t31;
    xsi_vlog_mul_concat(t21, 24, 1, t20, 1U, t24, 1);
    xsi_vlogtype_concat(t10, 32, 32, 2U, t21, 24, t11, 8);
    t32 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t32, t10, 0, 0, 32, 0LL);
    goto LAB37;

LAB31:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 8);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 8);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 255U);
    t19 = ((char*)((ng5)));
    t20 = (t0 + 1208U);
    t22 = *((char **)t20);
    memset(t24, 0, 8);
    t20 = (t24 + 4);
    t23 = (t22 + 4);
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 15);
    t28 = (t27 & 1);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t23);
    t30 = (t29 >> 15);
    t31 = (t30 & 1);
    *((unsigned int *)t20) = t31;
    xsi_vlog_mul_concat(t21, 24, 1, t19, 1U, t24, 1);
    xsi_vlogtype_concat(t10, 32, 32, 2U, t21, 24, t11, 8);
    t25 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t25, t10, 0, 0, 32, 0LL);
    goto LAB37;

LAB33:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 16);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 16);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 255U);
    t19 = ((char*)((ng5)));
    t20 = (t0 + 1208U);
    t22 = *((char **)t20);
    memset(t24, 0, 8);
    t20 = (t24 + 4);
    t23 = (t22 + 4);
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 23);
    t28 = (t27 & 1);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t23);
    t30 = (t29 >> 23);
    t31 = (t30 & 1);
    *((unsigned int *)t20) = t31;
    xsi_vlog_mul_concat(t21, 24, 1, t19, 1U, t24, 1);
    xsi_vlogtype_concat(t10, 32, 32, 2U, t21, 24, t11, 8);
    t25 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t25, t10, 0, 0, 32, 0LL);
    goto LAB37;

LAB35:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 24);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 24);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 255U);
    t19 = ((char*)((ng5)));
    t20 = (t0 + 1208U);
    t22 = *((char **)t20);
    memset(t24, 0, 8);
    t20 = (t24 + 4);
    t23 = (t22 + 4);
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t23);
    t30 = (t29 >> 31);
    t31 = (t30 & 1);
    *((unsigned int *)t20) = t31;
    xsi_vlog_mul_concat(t21, 24, 1, t19, 1U, t24, 1);
    xsi_vlogtype_concat(t10, 32, 32, 2U, t21, 24, t11, 8);
    t25 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t25, t10, 0, 0, 32, 0LL);
    goto LAB37;

LAB39:    xsi_set_current_line(48, ng0);
    t23 = (t0 + 1208U);
    t25 = *((char **)t23);
    memset(t21, 0, 8);
    t23 = (t21 + 4);
    t32 = (t25 + 4);
    t13 = *((unsigned int *)t25);
    t14 = (t13 >> 0);
    *((unsigned int *)t21) = t14;
    t15 = *((unsigned int *)t32);
    t16 = (t15 >> 0);
    *((unsigned int *)t23) = t16;
    t17 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t17 & 65535U);
    t18 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t18 & 65535U);
    t33 = ((char*)((ng1)));
    xsi_vlogtype_concat(t11, 32, 32, 2U, t33, 16, t21, 16);
    t34 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t34, t11, 0, 0, 32, 0LL);
    goto LAB43;

LAB41:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    memset(t21, 0, 8);
    t3 = (t21 + 4);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 16);
    *((unsigned int *)t21) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 16);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t17 & 65535U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 65535U);
    t19 = ((char*)((ng1)));
    xsi_vlogtype_concat(t11, 32, 32, 2U, t19, 16, t21, 16);
    t20 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t20, t11, 0, 0, 32, 0LL);
    goto LAB43;

LAB45:    xsi_set_current_line(53, ng0);
    t23 = (t0 + 1208U);
    t25 = *((char **)t23);
    memset(t24, 0, 8);
    t23 = (t24 + 4);
    t32 = (t25 + 4);
    t13 = *((unsigned int *)t25);
    t14 = (t13 >> 0);
    *((unsigned int *)t24) = t14;
    t15 = *((unsigned int *)t32);
    t16 = (t15 >> 0);
    *((unsigned int *)t23) = t16;
    t17 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t17 & 65535U);
    t18 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t18 & 65535U);
    t33 = ((char*)((ng9)));
    t34 = (t0 + 1208U);
    t36 = *((char **)t34);
    memset(t37, 0, 8);
    t34 = (t37 + 4);
    t38 = (t36 + 4);
    t26 = *((unsigned int *)t36);
    t27 = (t26 >> 15);
    t28 = (t27 & 1);
    *((unsigned int *)t37) = t28;
    t29 = *((unsigned int *)t38);
    t30 = (t29 >> 15);
    t31 = (t30 & 1);
    *((unsigned int *)t34) = t31;
    xsi_vlog_mul_concat(t35, 16, 1, t33, 1U, t37, 1);
    xsi_vlogtype_concat(t21, 32, 32, 2U, t35, 16, t24, 16);
    t39 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t39, t21, 0, 0, 32, 0LL);
    goto LAB49;

LAB47:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    memset(t24, 0, 8);
    t3 = (t24 + 4);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 16);
    *((unsigned int *)t24) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 16);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t17 & 65535U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 65535U);
    t19 = ((char*)((ng9)));
    t20 = (t0 + 1208U);
    t22 = *((char **)t20);
    memset(t37, 0, 8);
    t20 = (t37 + 4);
    t23 = (t22 + 4);
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t37) = t28;
    t29 = *((unsigned int *)t23);
    t30 = (t29 >> 31);
    t31 = (t30 & 1);
    *((unsigned int *)t20) = t31;
    xsi_vlog_mul_concat(t35, 16, 1, t19, 1U, t37, 1);
    xsi_vlogtype_concat(t21, 32, 32, 2U, t35, 16, t24, 16);
    t25 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t25, t21, 0, 0, 32, 0LL);
    goto LAB49;

}


extern void work_m_00000000003580010061_3134916586_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000003580010061_3134916586", "isim/test_mips_isim_beh.exe.sim/work/m_00000000003580010061_3134916586.didat");
	xsi_register_executes(pe);
}
