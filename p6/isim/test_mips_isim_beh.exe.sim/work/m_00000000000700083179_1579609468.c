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
static const char *ng0 = "C:/Users/dell/Desktop/BUAA2/PROJECT/P6-VerilogHDL-pipeline_CPU-V2/p6/CMP.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {31, 0};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {7U, 0U};



static void Initial_27_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_30_1(char *t0)
{
    char t4[8];
    char t19[8];
    char t42[8];
    char t43[8];
    char t45[8];
    char t58[8];
    char t66[8];
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
    char *t20;
    unsigned int t21;
    unsigned int t22;
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
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t44;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3256);
    *((int *)t2) = 1;
    t3 = (t0 + 2968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
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
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 7U);

LAB6:    t14 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 3, t14, 3);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    t16 = (t0 + 1208U);
    t18 = *((char **)t16);
    memset(t19, 0, 8);
    t16 = (t17 + 4);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t16);
    t25 = *((unsigned int *)t20);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB23;

LAB22:    if (t30 != 0)
        goto LAB24;

LAB25:    t34 = (t19 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t19);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB28:    goto LAB21;

LAB9:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1008U);
    t6 = (t3 + 72U);
    t7 = *((char **)t6);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t19, 32, t5, t7, 2, t14, 32, 1);
    t16 = ((char*)((ng3)));
    memset(t42, 0, 8);
    t17 = (t19 + 4);
    t18 = (t16 + 4);
    t8 = *((unsigned int *)t19);
    t9 = *((unsigned int *)t16);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t17);
    t12 = *((unsigned int *)t18);
    t13 = (t11 ^ t12);
    t21 = (t10 | t13);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB32;

LAB29:    if (t24 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t42) = 1;

LAB32:    t33 = (t42 + 4);
    t27 = *((unsigned int *)t33);
    t28 = (~(t27));
    t29 = *((unsigned int *)t42);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t19, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t21 = (t10 | t13);
    t22 = *((unsigned int *)t5);
    t23 = *((unsigned int *)t6);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB39;

LAB36:    if (t24 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t19) = 1;

LAB39:    t14 = (t19 + 4);
    t27 = *((unsigned int *)t14);
    t28 = (~(t27));
    t29 = *((unsigned int *)t19);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB42:
LAB35:    goto LAB21;

LAB11:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t19, 0, 8);
    t6 = (t5 + 4);
    t7 = (t3 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t3);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t21 = (t10 | t13);
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB44;

LAB43:    if (t24 != 0)
        goto LAB45;

LAB46:    memset(t42, 0, 8);
    t16 = (t19 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t19);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t16) != 0)
        goto LAB49;

LAB50:    t18 = (t42 + 4);
    t32 = *((unsigned int *)t42);
    t35 = *((unsigned int *)t18);
    t36 = (t32 || t35);
    if (t36 > 0)
        goto LAB51;

LAB52:    memcpy(t66, t42, 8);

LAB53:    t98 = (t66 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t66);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB67:    goto LAB21;

LAB13:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1008U);
    t6 = (t3 + 72U);
    t7 = *((char **)t6);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t19, 32, t5, t7, 2, t14, 32, 1);
    t16 = ((char*)((ng3)));
    memset(t42, 0, 8);
    t17 = (t19 + 4);
    t18 = (t16 + 4);
    t8 = *((unsigned int *)t19);
    t9 = *((unsigned int *)t16);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t17);
    t12 = *((unsigned int *)t18);
    t13 = (t11 ^ t12);
    t21 = (t10 | t13);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB71;

LAB68:    if (t24 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t42) = 1;

LAB71:    t33 = (t42 + 4);
    t27 = *((unsigned int *)t33);
    t28 = (~(t27));
    t29 = *((unsigned int *)t42);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB74:    goto LAB21;

LAB15:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1008U);
    t6 = (t3 + 72U);
    t7 = *((char **)t6);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t19, 32, t5, t7, 2, t14, 32, 1);
    t16 = ((char*)((ng1)));
    memset(t42, 0, 8);
    t17 = (t19 + 4);
    t18 = (t16 + 4);
    t8 = *((unsigned int *)t19);
    t9 = *((unsigned int *)t16);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t17);
    t12 = *((unsigned int *)t18);
    t13 = (t11 ^ t12);
    t21 = (t10 | t13);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB78;

LAB75:    if (t24 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t42) = 1;

LAB78:    t33 = (t42 + 4);
    t27 = *((unsigned int *)t33);
    t28 = (~(t27));
    t29 = *((unsigned int *)t42);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB81:    goto LAB21;

LAB17:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t21 = (t10 | t13);
    t22 = *((unsigned int *)t3);
    t23 = *((unsigned int *)t7);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB85;

LAB82:    if (t24 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t19) = 1;

LAB85:    t16 = (t19 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t19);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB88:    goto LAB21;

LAB23:    *((unsigned int *)t19) = 1;
    goto LAB25;

LAB24:    t33 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(33, ng0);
    t40 = ((char*)((ng3)));
    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t40, 0, 0, 1);
    goto LAB28;

LAB31:    t20 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(35, ng0);
    t34 = ((char*)((ng3)));
    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t34, 0, 0, 1);
    goto LAB35;

LAB38:    t7 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(36, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 1768);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 1);
    goto LAB42;

LAB44:    *((unsigned int *)t19) = 1;
    goto LAB46;

LAB45:    t14 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t42) = 1;
    goto LAB50;

LAB49:    t17 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB50;

LAB51:    t20 = (t0 + 1048U);
    t33 = *((char **)t20);
    t20 = (t0 + 1008U);
    t34 = (t20 + 72U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t43, 32, t33, t40, 2, t41, 32, 1);
    t44 = ((char*)((ng1)));
    memset(t45, 0, 8);
    t46 = (t43 + 4);
    t47 = (t44 + 4);
    t37 = *((unsigned int *)t43);
    t38 = *((unsigned int *)t44);
    t39 = (t37 ^ t38);
    t48 = *((unsigned int *)t46);
    t49 = *((unsigned int *)t47);
    t50 = (t48 ^ t49);
    t51 = (t39 | t50);
    t52 = *((unsigned int *)t46);
    t53 = *((unsigned int *)t47);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB57;

LAB54:    if (t54 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t45) = 1;

LAB57:    memset(t58, 0, 8);
    t59 = (t45 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t45);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t59) != 0)
        goto LAB60;

LAB61:    t67 = *((unsigned int *)t42);
    t68 = *((unsigned int *)t58);
    t69 = (t67 & t68);
    *((unsigned int *)t66) = t69;
    t70 = (t42 + 4);
    t71 = (t58 + 4);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB62;

LAB63:
LAB64:    goto LAB53;

LAB56:    t57 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t58) = 1;
    goto LAB61;

LAB60:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB61;

LAB62:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t66) = (t78 | t79);
    t80 = (t42 + 4);
    t81 = (t58 + 4);
    t82 = *((unsigned int *)t42);
    t83 = (~(t82));
    t84 = *((unsigned int *)t80);
    t85 = (~(t84));
    t86 = *((unsigned int *)t58);
    t87 = (~(t86));
    t88 = *((unsigned int *)t81);
    t89 = (~(t88));
    t90 = (t83 & t85);
    t91 = (t87 & t89);
    t92 = (~(t90));
    t93 = (~(t91));
    t94 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t94 & t92);
    t95 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t95 & t93);
    t96 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t96 & t92);
    t97 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t97 & t93);
    goto LAB64;

LAB65:    xsi_set_current_line(39, ng0);
    t104 = ((char*)((ng3)));
    t105 = (t0 + 1768);
    xsi_vlogvar_assign_value(t105, t104, 0, 0, 1);
    goto LAB67;

LAB70:    t20 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(42, ng0);
    t34 = ((char*)((ng3)));
    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t34, 0, 0, 1);
    goto LAB74;

LAB77:    t20 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB78;

LAB79:    xsi_set_current_line(45, ng0);
    t34 = ((char*)((ng3)));
    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t34, 0, 0, 1);
    goto LAB81;

LAB84:    t14 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(48, ng0);
    t17 = ((char*)((ng3)));
    t18 = (t0 + 1768);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB88;

}


extern void work_m_00000000000700083179_1579609468_init()
{
	static char *pe[] = {(void *)Initial_27_0,(void *)Always_30_1};
	xsi_register_didat("work_m_00000000000700083179_1579609468", "isim/test_mips_isim_beh.exe.sim/work/m_00000000000700083179_1579609468.didat");
	xsi_register_executes(pe);
}
