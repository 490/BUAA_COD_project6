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
static int ng0[] = {4, 0};



static void implSig1_execute(char *t0)
{
    char t3[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t4, 32, t2, 32);
    xsi_vlogtype_concat(t3, 32, 32, 1U, t5, 32);
    t6 = (t0 + 3728);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 8);
    xsi_driver_vfirst_trans(t6, 0, 31);
    t11 = (t0 + 3648);
    *((int *)t11) = 1;

LAB1:    return;
}


extern void work_m_00000000000720426154_1595836845_init()
{
	static char *pe[] = {(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000720426154_1595836845", "isim/test_mips_isim_beh.exe.sim/work/m_00000000000720426154_1595836845.didat");
	xsi_register_executes(pe);
}
