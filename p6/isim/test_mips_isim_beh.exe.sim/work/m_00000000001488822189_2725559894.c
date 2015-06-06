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
static const char *ng0 = "C:/Users/dell/Desktop/BUAA2/PROJECT/P6-VerilogHDL-pipeline_CPU-V2/p6/alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static int ng7[] = {32, 0};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static int ng10[] = {31, 0};
static int ng11[] = {0, 0};
static int ng12[] = {1, 0};
static unsigned int ng13[] = {8U, 0U};
static unsigned int ng14[] = {9U, 0U};
static unsigned int ng15[] = {10U, 0U};



static void Always_29_0(char *t0)
{
    char t4[8];
    char t19[8];
    char t40[8];
    char t42[8];
    char t44[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t41;
    char *t43;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t14, 4);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    t16 = (t0 + 1208U);
    t18 = *((char **)t16);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t17, 32, t18, 32);
    t16 = (t0 + 1928);
    xsi_vlogvar_assign_value(t16, t19, 0, 0, 32);
    goto LAB29;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 32, t5, 32, t6, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t19, 0, 0, 32);
    goto LAB29;

LAB11:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t19) = t10;
    t3 = (t5 + 4);
    t7 = (t6 + 4);
    t14 = (t19 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t14) = t13;
    t20 = *((unsigned int *)t14);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB30;

LAB31:
LAB32:    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t19, 0, 0, 32);
    goto LAB29;

LAB13:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t19) = t10;
    t3 = (t5 + 4);
    t7 = (t6 + 4);
    t14 = (t19 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t14) = t13;
    t20 = *((unsigned int *)t14);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB33;

LAB34:
LAB35:    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t19, 0, 0, 32);
    goto LAB29;

LAB15:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    *((unsigned int *)t19) = t10;
    t3 = (t5 + 4);
    t7 = (t6 + 4);
    t14 = (t19 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t14) = t13;
    t20 = *((unsigned int *)t14);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB36;

LAB37:
LAB38:    t16 = (t0 + 1928);
    xsi_vlogvar_assign_value(t16, t19, 0, 0, 32);
    goto LAB29;

LAB17:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 1048U);
    t6 = *((char **)t3);
    t3 = ((char*)((ng7)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_mod(t19, 32, t6, 32, t3, 32);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_lshift(t40, 32, t5, 32, t19, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t40, 0, 0, 32);
    goto LAB29;

LAB19:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 1048U);
    t6 = *((char **)t3);
    t3 = ((char*)((ng7)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_mod(t19, 32, t6, 32, t3, 32);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_rshift(t40, 32, t5, 32, t19, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t40, 0, 0, 32);
    goto LAB29;

LAB21:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 1168U);
    t6 = (t3 + 72U);
    t7 = *((char **)t6);
    t14 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t19, 32, t5, t7, 2, t14, 32, 1);

LAB39:    t16 = ((char*)((ng11)));
    t27 = xsi_vlog_unsigned_case_compare(t19, 32, t16, 32);
    if (t27 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_compare(t19, 32, t2, 32);
    if (t15 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB29;

LAB23:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t42) = t10;
    t3 = (t5 + 4);
    t7 = (t6 + 4);
    t14 = (t42 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t14) = t13;
    t20 = *((unsigned int *)t14);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB49;

LAB50:
LAB51:    memset(t40, 0, 8);
    t18 = (t40 + 4);
    t41 = (t42 + 4);
    t36 = *((unsigned int *)t42);
    t37 = (~(t36));
    *((unsigned int *)t40) = t37;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB53;

LAB52:    t48 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t48 & 4294967295U);
    t49 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t49 & 4294967295U);
    t43 = (t0 + 1928);
    xsi_vlogvar_assign_value(t43, t40, 0, 0, 32);
    goto LAB29;

LAB25:    xsi_set_current_line(46, ng0);

LAB54:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t40, 0, 8);
    t3 = (t5 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB56;

LAB55:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB56;

LAB59:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB57;

LAB58:    t16 = (t40 + 4);
    t8 = *((unsigned int *)t16);
    t9 = (~(t8));
    t10 = *((unsigned int *)t40);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB62:    goto LAB29;

LAB27:    xsi_set_current_line(53, ng0);

LAB63:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t40, 0, 8);
    t3 = (t5 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB65;

LAB64:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB65;

LAB68:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB66;

LAB67:    t16 = (t40 + 4);
    t8 = *((unsigned int *)t16);
    t9 = (~(t8));
    t10 = *((unsigned int *)t40);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB71:    goto LAB29;

LAB30:    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t19) = (t22 | t23);
    t16 = (t5 + 4);
    t17 = (t6 + 4);
    t24 = *((unsigned int *)t16);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (t26 & t25);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t31 = (t30 & t29);
    t32 = (~(t27));
    t33 = (~(t31));
    t34 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t34 & t32);
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t33);
    goto LAB32;

LAB33:    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t19) = (t22 | t23);
    t16 = (t5 + 4);
    t17 = (t6 + 4);
    t24 = *((unsigned int *)t5);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t28 = (~(t26));
    t29 = *((unsigned int *)t6);
    t30 = (~(t29));
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t27 = (t25 & t28);
    t31 = (t30 & t33);
    t34 = (~(t27));
    t35 = (~(t31));
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & t34);
    t37 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t37 & t35);
    t38 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t38 & t34);
    t39 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t39 & t35);
    goto LAB35;

LAB36:    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t19) = (t22 | t23);
    goto LAB38;

LAB40:    xsi_set_current_line(41, ng0);
    t17 = (t0 + 1208U);
    t18 = *((char **)t17);
    t17 = (t0 + 1048U);
    t41 = *((char **)t17);
    t17 = ((char*)((ng7)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_mod(t40, 32, t41, 32, t17, 32);
    memset(t42, 0, 8);
    xsi_vlog_unsigned_rshift(t42, 32, t18, 32, t40, 32);
    t43 = (t0 + 1928);
    xsi_vlogvar_assign_value(t43, t42, 0, 0, 32);
    goto LAB44;

LAB42:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t42, 0, 8);
    t3 = (t42 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    *((unsigned int *)t42) = t9;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB46;

LAB45:    t20 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t20 & 4294967295U);
    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 4294967295U);
    t7 = (t0 + 1048U);
    t14 = *((char **)t7);
    t7 = ((char*)((ng7)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_mod(t44, 32, t14, 32, t7, 32);
    memset(t45, 0, 8);
    xsi_vlog_unsigned_rshift(t45, 32, t42, 32, t44, 32);
    memset(t40, 0, 8);
    t16 = (t40 + 4);
    t17 = (t45 + 4);
    t22 = *((unsigned int *)t45);
    t23 = (~(t22));
    *((unsigned int *)t40) = t23;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB48;

LAB47:    t29 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t29 & 4294967295U);
    t30 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t30 & 4294967295U);
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t40, 0, 0, 32);
    goto LAB44;

LAB46:    t10 = *((unsigned int *)t42);
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t42) = (t10 | t11);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t3) = (t12 | t13);
    goto LAB45;

LAB48:    t24 = *((unsigned int *)t40);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t40) = (t24 | t25);
    t26 = *((unsigned int *)t16);
    t28 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t26 | t28);
    goto LAB47;

LAB49:    t22 = *((unsigned int *)t42);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t42) = (t22 | t23);
    t16 = (t5 + 4);
    t17 = (t6 + 4);
    t24 = *((unsigned int *)t16);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (t26 & t25);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t31 = (t30 & t29);
    t32 = (~(t27));
    t33 = (~(t31));
    t34 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t34 & t32);
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t33);
    goto LAB51;

LAB53:    t38 = *((unsigned int *)t40);
    t39 = *((unsigned int *)t41);
    *((unsigned int *)t40) = (t38 | t39);
    t46 = *((unsigned int *)t18);
    t47 = *((unsigned int *)t41);
    *((unsigned int *)t18) = (t46 | t47);
    goto LAB52;

LAB56:    t14 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB58;

LAB57:    *((unsigned int *)t40) = 1;
    goto LAB58;

LAB60:    xsi_set_current_line(48, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 32);
    goto LAB62;

LAB65:    t14 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB67;

LAB66:    *((unsigned int *)t40) = 1;
    goto LAB67;

LAB69:    xsi_set_current_line(55, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 32);
    goto LAB71;

}


extern void work_m_00000000001488822189_2725559894_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000001488822189_2725559894", "isim/test_mips_isim_beh.exe.sim/work/m_00000000001488822189_2725559894.didat");
	xsi_register_executes(pe);
}
