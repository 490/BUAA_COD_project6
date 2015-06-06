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
static const char *ng0 = "C:/Users/dell/Desktop/BUAA2/PROJECT/P6-VerilogHDL-pipeline_CPU-V2/p6/gpr.v";
static int ng1[] = {0, 0};
static int ng2[] = {33, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {32, 0};



static void Initial_36_0(char *t0)
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
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2888);
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
    t13 = (t0 + 2728);
    t16 = (t0 + 2728);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2728);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2888);
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
    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB7;

}

static void Always_42_1(char *t0)
{
    char t6[8];
    char t15[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5120);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(45, ng0);
    t13 = ((char*)((ng3)));
    t14 = (t0 + 2728);
    t17 = (t0 + 2728);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2728);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2888);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB9:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB10;

}

static void Cont_49_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char t21[8];
    char t55[8];
    char t70[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t64 = *((unsigned int *)t4);
    t65 = (~(t64));
    t66 = *((unsigned int *)t12);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t70, 8);

LAB16:    t77 = (t0 + 5248);
    t79 = (t77 + 56U);
    t80 = *((char **)t79);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    memcpy(t82, t3, 8);
    xsi_driver_vfirst_trans(t77, 0, 31);
    t83 = (t0 + 5136);
    *((int *)t83) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1528U);
    t19 = *((char **)t18);
    t18 = (t0 + 1208U);
    t20 = *((char **)t18);
    memset(t21, 0, 8);
    t18 = (t19 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t19);
    t24 = *((unsigned int *)t20);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t18);
    t27 = *((unsigned int *)t22);
    t28 = (t26 ^ t27);
    t29 = (t25 | t28);
    t30 = *((unsigned int *)t18);
    t31 = *((unsigned int *)t22);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB20;

LAB17:    if (t32 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t21) = 1;

LAB20:    memset(t17, 0, 8);
    t36 = (t21 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t21);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t36) != 0)
        goto LAB23;

LAB24:    t43 = (t17 + 4);
    t44 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t43);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB25;

LAB26:    t49 = *((unsigned int *)t17);
    t50 = (~(t49));
    t51 = *((unsigned int *)t43);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t43) > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t17) > 0)
        goto LAB31;

LAB32:    memcpy(t16, t55, 8);

LAB33:    goto LAB9;

LAB10:    t62 = (t0 + 2728);
    t68 = (t62 + 56U);
    t69 = *((char **)t68);
    t71 = (t0 + 2728);
    t72 = (t71 + 72U);
    t73 = *((char **)t72);
    t74 = (t0 + 2728);
    t75 = (t74 + 64U);
    t76 = *((char **)t75);
    t77 = (t0 + 1208U);
    t78 = *((char **)t77);
    xsi_vlog_generic_get_array_select_value(t70, 32, t69, t73, t76, 2, 1, t78, 5, 2);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t70, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB19:    t35 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t17) = 1;
    goto LAB24;

LAB23:    t42 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB24;

LAB25:    t47 = (t0 + 2008U);
    t48 = *((char **)t47);
    goto LAB26;

LAB27:    t47 = (t0 + 2728);
    t53 = (t47 + 56U);
    t54 = *((char **)t53);
    t56 = (t0 + 2728);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = (t0 + 2728);
    t60 = (t59 + 64U);
    t61 = *((char **)t60);
    t62 = (t0 + 1208U);
    t63 = *((char **)t62);
    xsi_vlog_generic_get_array_select_value(t55, 32, t54, t58, t61, 2, 1, t63, 5, 2);
    goto LAB28;

LAB29:    xsi_vlog_unsigned_bit_combine(t16, 32, t48, 32, t55, 32);
    goto LAB33;

LAB31:    memcpy(t16, t48, 8);
    goto LAB33;

}

static void Cont_50_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char t21[8];
    char t55[8];
    char t70[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;

LAB0:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t64 = *((unsigned int *)t4);
    t65 = (~(t64));
    t66 = *((unsigned int *)t12);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t70, 8);

LAB16:    t77 = (t0 + 5312);
    t79 = (t77 + 56U);
    t80 = *((char **)t79);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    memcpy(t82, t3, 8);
    xsi_driver_vfirst_trans(t77, 0, 31);
    t83 = (t0 + 5152);
    *((int *)t83) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1528U);
    t19 = *((char **)t18);
    t18 = (t0 + 1368U);
    t20 = *((char **)t18);
    memset(t21, 0, 8);
    t18 = (t19 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t19);
    t24 = *((unsigned int *)t20);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t18);
    t27 = *((unsigned int *)t22);
    t28 = (t26 ^ t27);
    t29 = (t25 | t28);
    t30 = *((unsigned int *)t18);
    t31 = *((unsigned int *)t22);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB20;

LAB17:    if (t32 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t21) = 1;

LAB20:    memset(t17, 0, 8);
    t36 = (t21 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t21);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t36) != 0)
        goto LAB23;

LAB24:    t43 = (t17 + 4);
    t44 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t43);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB25;

LAB26:    t49 = *((unsigned int *)t17);
    t50 = (~(t49));
    t51 = *((unsigned int *)t43);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t43) > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t17) > 0)
        goto LAB31;

LAB32:    memcpy(t16, t55, 8);

LAB33:    goto LAB9;

LAB10:    t62 = (t0 + 2728);
    t68 = (t62 + 56U);
    t69 = *((char **)t68);
    t71 = (t0 + 2728);
    t72 = (t71 + 72U);
    t73 = *((char **)t72);
    t74 = (t0 + 2728);
    t75 = (t74 + 64U);
    t76 = *((char **)t75);
    t77 = (t0 + 1368U);
    t78 = *((char **)t77);
    xsi_vlog_generic_get_array_select_value(t70, 32, t69, t73, t76, 2, 1, t78, 5, 2);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t70, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB19:    t35 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t17) = 1;
    goto LAB24;

LAB23:    t42 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB24;

LAB25:    t47 = (t0 + 2008U);
    t48 = *((char **)t47);
    goto LAB26;

LAB27:    t47 = (t0 + 2728);
    t53 = (t47 + 56U);
    t54 = *((char **)t53);
    t56 = (t0 + 2728);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = (t0 + 2728);
    t60 = (t59 + 64U);
    t61 = *((char **)t60);
    t62 = (t0 + 1368U);
    t63 = *((char **)t62);
    xsi_vlog_generic_get_array_select_value(t55, 32, t54, t58, t61, 2, 1, t63, 5, 2);
    goto LAB28;

LAB29:    xsi_vlog_unsigned_bit_combine(t16, 32, t48, 32, t55, 32);
    goto LAB33;

LAB31:    memcpy(t16, t48, 8);
    goto LAB33;

}

static void Always_52_4(char *t0)
{
    char t13[8];
    char t14[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 4800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 5168);
    *((int *)t2) = 1;
    t3 = (t0 + 4832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
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

LAB6:    xsi_set_current_line(55, ng0);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    t11 = (t0 + 2728);
    t15 = (t0 + 2728);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2728);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1528U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t22, 5, 2);
    t21 = (t13 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB10;

}


extern void work_m_00000000003948623599_3739879962_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Always_42_1,(void *)Cont_49_2,(void *)Cont_50_3,(void *)Always_52_4};
	xsi_register_didat("work_m_00000000003948623599_3739879962", "isim/test_mips_isim_beh.exe.sim/work/m_00000000003948623599_3739879962.didat");
	xsi_register_executes(pe);
}
