/* vi: set sw=4 ts=4: */
/*
 * Copyright (C) 2021 Denys Vlasenko <vda.linux@googlemail.com>
 *
 * Licensed under GPLv2, see file LICENSE in this source tree.
 */
//config:config arymutest
//config:	bool "arymutest"
//config:	default y
//config:	help
//config:	Print arymutest table.
//config:

//applet:IF_arymutest(APPLET(arymutest, BB_DIR_USR_BIN, BB_SUID_DROP))

//kbuild:lib-$(CONFIG_arymutest) += arymutest.o

//usage:#define arymutest_trivial_usage NOUSAGE_STR
//usage:#define arymutest_full_usage "

int arymutest_main(int argc, char **argv) MAIN_EXTERNALLY_VISIBLE;
int arymutest_main(int argc UNUSED_PARAM, char **argv UNUSED_PARAM) {
	printf("hello this is test :3");
	return 0;
}