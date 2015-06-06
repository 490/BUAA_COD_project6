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
static const char *ng0 = "C:/Users/dell/Desktop/BUAA2/PROJECT/P6-VerilogHDL-pipeline_CPU-V2/p6/mul_div.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {5, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {10, 0};
static unsigned int ng8[] = {3U, 0U};



static void Initial_42_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_49_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5352);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_56_2(char *t0)
{
    char t14[16];
    char t15[16];
    char t16[16];
    char t17[8];
    char t19[8];
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

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5368);
    *((int *)t2) = 1;
    t3 = (t0 + 4816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 2008U);
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

LAB6:    xsi_set_current_line(59, ng0);

LAB9:    xsi_set_current_line(60, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);

LAB10:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB8;

LAB11:    xsi_set_current_line(62, ng0);

LAB20:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t11 = *((char **)t4);
    xsi_vlog_unsigned_multiply(t14, 64, t5, 32, t11, 32);
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t14, 0, 0, 32, 0LL);
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t14, 32, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 5);
    goto LAB19;

LAB13:    xsi_set_current_line(66, ng0);

LAB21:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    xsi_vlogtype_sign_extend(t14, 64, t5, 32);
    t4 = (t0 + 1528U);
    t11 = *((char **)t4);
    xsi_vlogtype_sign_extend(t15, 64, t11, 32);
    xsi_vlog_signed_multiply(t16, 64, t14, 64, t15, 64);
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t16, 0, 0, 32, 0LL);
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t16, 32, 0, 32, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 5);
    goto LAB19;

LAB15:    xsi_set_current_line(70, ng0);

LAB22:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t11 = *((char **)t4);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_divide(t17, 32, t5, 32, t11, 32);
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t17, 0, 0, 32, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_mod(t17, 32, t4, 32, t5, 32);
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t17, 0, 0, 32, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 5);
    goto LAB19;

LAB17:    xsi_set_current_line(75, ng0);

LAB23:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t11 = *((char **)t4);
    memset(t19, 0, 8);
    xsi_vlog_signed_divide(t19, 32, t5, 32, t11, 32);
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    memset(t19, 0, 8);
    xsi_vlog_signed_mod(t19, 32, t4, 32, t5, 32);
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 5);
    goto LAB19;

}

static void Always_85_3(char *t0)
{
    char t7[8];
    char t19[8];
    char t33[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5384);
    *((int *)t2) = 1;
    t3 = (t0 + 5064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);

LAB5:    xsi_set_current_line(87, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB9:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB10;

LAB11:    memcpy(t41, t7, 8);

LAB12:    t73 = (t41 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t8);
    t26 = (t18 | t25);
    t27 = (~(t26));
    t28 = (t17 & t27);
    if (t28 != 0)
        goto LAB27;

LAB26:    if (t26 != 0)
        goto LAB28;

LAB29:    t15 = (t7 + 4);
    t29 = *((unsigned int *)t15);
    t30 = (~(t29));
    t31 = *((unsigned int *)t7);
    t32 = (t31 & t30);
    t35 = (t32 != 0);
    if (t35 > 0)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB33;

LAB34:
LAB35:    goto LAB2;

LAB6:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB9;

LAB10:    t20 = (t0 + 3368);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t19, 0, 8);
    t23 = (t19 + 4);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (~(t25));
    *((unsigned int *)t19) = t26;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB14;

LAB13:    t31 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t31 & 31U);
    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 & 31U);
    memset(t33, 0, 8);
    t34 = (t19 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t19);
    t38 = (t37 & t36);
    t39 = (t38 & 31U);
    if (t39 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t34) != 0)
        goto LAB17;

LAB18:    t42 = *((unsigned int *)t7);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t7 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB12;

LAB14:    t27 = *((unsigned int *)t19);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t19) = (t27 | t28);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t29 | t30);
    goto LAB13;

LAB15:    *((unsigned int *)t33) = 1;
    goto LAB18;

LAB17:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB18;

LAB19:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t7 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t7);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB21;

LAB22:    xsi_set_current_line(88, ng0);

LAB25:    xsi_set_current_line(89, ng0);
    t79 = (t0 + 3048);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t82, t81, 0, 0, 32, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB24;

LAB27:    *((unsigned int *)t7) = 1;
    goto LAB29;

LAB28:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(94, ng0);
    t20 = (t0 + 3368);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 32, t22, 5, t23, 32);
    t24 = (t0 + 3368);
    xsi_vlogvar_assign_value(t24, t19, 0, 0, 5);
    goto LAB32;

LAB33:    xsi_set_current_line(96, ng0);

LAB36:    xsi_set_current_line(97, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    t18 = *((unsigned int *)t5);
    t25 = (t18 & t17);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB39:    goto LAB35;

LAB37:    xsi_set_current_line(98, ng0);
    t6 = (t0 + 1368U);
    t8 = *((char **)t6);
    t6 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 32, 0LL);
    goto LAB39;

}


extern void work_m_00000000003962158738_4177685882_init()
{
	static char *pe[] = {(void *)Initial_42_0,(void *)Always_49_1,(void *)Always_56_2,(void *)Always_85_3};
	xsi_register_didat("work_m_00000000003962158738_4177685882", "isim/test_mips_isim_beh.exe.sim/work/m_00000000003962158738_4177685882.didat");
	xsi_register_executes(pe);
}
