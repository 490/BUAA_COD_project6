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
static const char *ng0 = "C:/Users/dell/Desktop/BUAA2/PROJECT/P6-VerilogHDL-pipeline_CPU-V2/p6/dm.v";
static int ng1[] = {0, 0};
static int ng2[] = {2048, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {15U, 0U};
static int ng6[] = {31, 0};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {15, 0};
static unsigned int ng9[] = {12U, 0U};
static int ng10[] = {16, 0};
static unsigned int ng11[] = {1U, 0U};
static int ng12[] = {7, 0};
static unsigned int ng13[] = {2U, 0U};
static int ng14[] = {8, 0};
static unsigned int ng15[] = {4U, 0U};
static int ng16[] = {23, 0};
static unsigned int ng17[] = {8U, 0U};
static int ng18[] = {24, 0};



static void Cont_32_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2248);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2248);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1048U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 10, 2);
    t12 = (t0 + 4240);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 4144);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_36_1(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2248);
    t16 = (t0 + 2248);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2248);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2408);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB7;

}

static void Always_45_2(char *t0)
{
    char t16[8];
    char t17[8];
    char t26[8];
    char t27[8];
    char t28[8];
    char t61[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    int t35;
    char *t36;
    unsigned int t37;
    int t38;
    int t39;
    char *t40;
    unsigned int t41;
    int t42;
    int t43;
    char *t44;
    unsigned int t45;
    int t46;
    int t47;
    char *t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned int t62;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4160);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(48, ng0);

LAB9:    xsi_set_current_line(49, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);

LAB10:    t11 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t11, 4);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB8;

LAB11:    xsi_set_current_line(50, ng0);
    t14 = (t0 + 1368U);
    t15 = *((char **)t14);
    t14 = (t0 + 2248);
    t18 = (t0 + 2248);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2248);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 1048U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t25, 10, 2);
    t24 = (t0 + 2248);
    t29 = (t24 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng6)));
    t32 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t26, t27, t28, ((int*)(t30)), 2, t31, 32, 1, t32, 32, 1);
    t33 = (t16 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t17 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    t39 = (t35 && t38);
    t40 = (t26 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    t43 = (t39 && t42);
    t44 = (t27 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t43 && t46);
    t48 = (t28 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB26;

LAB27:    goto LAB25;

LAB13:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 65535U);
    t34 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t34 & 65535U);
    t11 = (t0 + 2248);
    t14 = (t0 + 2248);
    t15 = (t14 + 72U);
    t18 = *((char **)t15);
    t19 = (t0 + 2248);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 1048U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t17, t26, t18, t21, 2, 1, t23, 10, 2);
    t22 = (t0 + 2248);
    t24 = (t22 + 72U);
    t25 = *((char **)t24);
    t29 = ((char*)((ng8)));
    t30 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t27, t28, t61, ((int*)(t25)), 2, t29, 32, 1, t30, 32, 1);
    t31 = (t17 + 4);
    t37 = *((unsigned int *)t31);
    t35 = (!(t37));
    t32 = (t26 + 4);
    t41 = *((unsigned int *)t32);
    t38 = (!(t41));
    t39 = (t35 && t38);
    t33 = (t27 + 4);
    t45 = *((unsigned int *)t33);
    t42 = (!(t45));
    t43 = (t39 && t42);
    t36 = (t28 + 4);
    t49 = *((unsigned int *)t36);
    t46 = (!(t49));
    t47 = (t43 && t46);
    t40 = (t61 + 4);
    t52 = *((unsigned int *)t40);
    t50 = (!(t52));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB28;

LAB29:    goto LAB25;

LAB15:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 65535U);
    t34 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t34 & 65535U);
    t11 = (t0 + 2248);
    t14 = (t0 + 2248);
    t15 = (t14 + 72U);
    t18 = *((char **)t15);
    t19 = (t0 + 2248);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 1048U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t17, t26, t18, t21, 2, 1, t23, 10, 2);
    t22 = (t0 + 2248);
    t24 = (t22 + 72U);
    t25 = *((char **)t24);
    t29 = ((char*)((ng6)));
    t30 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t27, t28, t61, ((int*)(t25)), 2, t29, 32, 1, t30, 32, 1);
    t31 = (t17 + 4);
    t37 = *((unsigned int *)t31);
    t35 = (!(t37));
    t32 = (t26 + 4);
    t41 = *((unsigned int *)t32);
    t38 = (!(t41));
    t39 = (t35 && t38);
    t33 = (t27 + 4);
    t45 = *((unsigned int *)t33);
    t42 = (!(t45));
    t43 = (t39 && t42);
    t36 = (t28 + 4);
    t49 = *((unsigned int *)t36);
    t46 = (!(t49));
    t47 = (t43 && t46);
    t40 = (t61 + 4);
    t52 = *((unsigned int *)t40);
    t50 = (!(t52));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB30;

LAB31:    goto LAB25;

LAB17:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t34 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t34 & 255U);
    t11 = (t0 + 2248);
    t14 = (t0 + 2248);
    t15 = (t14 + 72U);
    t18 = *((char **)t15);
    t19 = (t0 + 2248);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 1048U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t17, t26, t18, t21, 2, 1, t23, 10, 2);
    t22 = (t0 + 2248);
    t24 = (t22 + 72U);
    t25 = *((char **)t24);
    t29 = ((char*)((ng12)));
    t30 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t27, t28, t61, ((int*)(t25)), 2, t29, 32, 1, t30, 32, 1);
    t31 = (t17 + 4);
    t37 = *((unsigned int *)t31);
    t35 = (!(t37));
    t32 = (t26 + 4);
    t41 = *((unsigned int *)t32);
    t38 = (!(t41));
    t39 = (t35 && t38);
    t33 = (t27 + 4);
    t45 = *((unsigned int *)t33);
    t42 = (!(t45));
    t43 = (t39 && t42);
    t36 = (t28 + 4);
    t49 = *((unsigned int *)t36);
    t46 = (!(t49));
    t47 = (t43 && t46);
    t40 = (t61 + 4);
    t52 = *((unsigned int *)t40);
    t50 = (!(t52));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB32;

LAB33:    goto LAB25;

LAB19:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t34 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t34 & 255U);
    t11 = (t0 + 2248);
    t14 = (t0 + 2248);
    t15 = (t14 + 72U);
    t18 = *((char **)t15);
    t19 = (t0 + 2248);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 1048U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t17, t26, t18, t21, 2, 1, t23, 10, 2);
    t22 = (t0 + 2248);
    t24 = (t22 + 72U);
    t25 = *((char **)t24);
    t29 = ((char*)((ng8)));
    t30 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t27, t28, t61, ((int*)(t25)), 2, t29, 32, 1, t30, 32, 1);
    t31 = (t17 + 4);
    t37 = *((unsigned int *)t31);
    t35 = (!(t37));
    t32 = (t26 + 4);
    t41 = *((unsigned int *)t32);
    t38 = (!(t41));
    t39 = (t35 && t38);
    t33 = (t27 + 4);
    t45 = *((unsigned int *)t33);
    t42 = (!(t45));
    t43 = (t39 && t42);
    t36 = (t28 + 4);
    t49 = *((unsigned int *)t36);
    t46 = (!(t49));
    t47 = (t43 && t46);
    t40 = (t61 + 4);
    t52 = *((unsigned int *)t40);
    t50 = (!(t52));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB34;

LAB35:    goto LAB25;

LAB21:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t34 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t34 & 255U);
    t11 = (t0 + 2248);
    t14 = (t0 + 2248);
    t15 = (t14 + 72U);
    t18 = *((char **)t15);
    t19 = (t0 + 2248);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 1048U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t17, t26, t18, t21, 2, 1, t23, 10, 2);
    t22 = (t0 + 2248);
    t24 = (t22 + 72U);
    t25 = *((char **)t24);
    t29 = ((char*)((ng16)));
    t30 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t27, t28, t61, ((int*)(t25)), 2, t29, 32, 1, t30, 32, 1);
    t31 = (t17 + 4);
    t37 = *((unsigned int *)t31);
    t35 = (!(t37));
    t32 = (t26 + 4);
    t41 = *((unsigned int *)t32);
    t38 = (!(t41));
    t39 = (t35 && t38);
    t33 = (t27 + 4);
    t45 = *((unsigned int *)t33);
    t42 = (!(t45));
    t43 = (t39 && t42);
    t36 = (t28 + 4);
    t49 = *((unsigned int *)t36);
    t46 = (!(t49));
    t47 = (t43 && t46);
    t40 = (t61 + 4);
    t52 = *((unsigned int *)t40);
    t50 = (!(t52));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB36;

LAB37:    goto LAB25;

LAB23:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t34 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t34 & 255U);
    t11 = (t0 + 2248);
    t14 = (t0 + 2248);
    t15 = (t14 + 72U);
    t18 = *((char **)t15);
    t19 = (t0 + 2248);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 1048U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t17, t26, t18, t21, 2, 1, t23, 10, 2);
    t22 = (t0 + 2248);
    t24 = (t22 + 72U);
    t25 = *((char **)t24);
    t29 = ((char*)((ng6)));
    t30 = ((char*)((ng18)));
    xsi_vlog_convert_partindices(t27, t28, t61, ((int*)(t25)), 2, t29, 32, 1, t30, 32, 1);
    t31 = (t17 + 4);
    t37 = *((unsigned int *)t31);
    t35 = (!(t37));
    t32 = (t26 + 4);
    t41 = *((unsigned int *)t32);
    t38 = (!(t41));
    t39 = (t35 && t38);
    t33 = (t27 + 4);
    t45 = *((unsigned int *)t33);
    t42 = (!(t45));
    t43 = (t39 && t42);
    t36 = (t28 + 4);
    t49 = *((unsigned int *)t36);
    t46 = (!(t49));
    t47 = (t43 && t46);
    t40 = (t61 + 4);
    t52 = *((unsigned int *)t40);
    t50 = (!(t52));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB38;

LAB39:    goto LAB25;

LAB26:    t52 = *((unsigned int *)t28);
    t53 = (t52 + 0);
    t54 = *((unsigned int *)t17);
    t55 = *((unsigned int *)t27);
    t56 = (t54 + t55);
    t57 = *((unsigned int *)t26);
    t58 = *((unsigned int *)t27);
    t59 = (t57 - t58);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t14, t15, t53, t56, t60, 0LL);
    goto LAB27;

LAB28:    t54 = *((unsigned int *)t61);
    t53 = (t54 + 0);
    t55 = *((unsigned int *)t26);
    t57 = *((unsigned int *)t28);
    t56 = (t55 + t57);
    t58 = *((unsigned int *)t27);
    t62 = *((unsigned int *)t28);
    t59 = (t58 - t62);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t11, t16, t53, t56, t60, 0LL);
    goto LAB29;

LAB30:    t54 = *((unsigned int *)t61);
    t53 = (t54 + 0);
    t55 = *((unsigned int *)t26);
    t57 = *((unsigned int *)t28);
    t56 = (t55 + t57);
    t58 = *((unsigned int *)t27);
    t62 = *((unsigned int *)t28);
    t59 = (t58 - t62);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t11, t16, t53, t56, t60, 0LL);
    goto LAB31;

LAB32:    t54 = *((unsigned int *)t61);
    t53 = (t54 + 0);
    t55 = *((unsigned int *)t26);
    t57 = *((unsigned int *)t28);
    t56 = (t55 + t57);
    t58 = *((unsigned int *)t27);
    t62 = *((unsigned int *)t28);
    t59 = (t58 - t62);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t11, t16, t53, t56, t60, 0LL);
    goto LAB33;

LAB34:    t54 = *((unsigned int *)t61);
    t53 = (t54 + 0);
    t55 = *((unsigned int *)t26);
    t57 = *((unsigned int *)t28);
    t56 = (t55 + t57);
    t58 = *((unsigned int *)t27);
    t62 = *((unsigned int *)t28);
    t59 = (t58 - t62);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t11, t16, t53, t56, t60, 0LL);
    goto LAB35;

LAB36:    t54 = *((unsigned int *)t61);
    t53 = (t54 + 0);
    t55 = *((unsigned int *)t26);
    t57 = *((unsigned int *)t28);
    t56 = (t55 + t57);
    t58 = *((unsigned int *)t27);
    t62 = *((unsigned int *)t28);
    t59 = (t58 - t62);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t11, t16, t53, t56, t60, 0LL);
    goto LAB37;

LAB38:    t54 = *((unsigned int *)t61);
    t53 = (t54 + 0);
    t55 = *((unsigned int *)t26);
    t57 = *((unsigned int *)t28);
    t56 = (t55 + t57);
    t58 = *((unsigned int *)t27);
    t62 = *((unsigned int *)t28);
    t59 = (t58 - t62);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t11, t16, t53, t56, t60, 0LL);
    goto LAB39;

}


extern void work_m_00000000001726494098_0010801604_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Initial_36_1,(void *)Always_45_2};
	xsi_register_didat("work_m_00000000001726494098_0010801604", "isim/test_mips_isim_beh.exe.sim/work/m_00000000001726494098_0010801604.didat");
	xsi_register_executes(pe);
}
