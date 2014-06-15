/* srstest.c - (C) 2012, Timo Buhrmester
 * libsrslog - A srs lib
  * See README for contact-, COPYING for license information.  */

#include <stdlib.h>

#define LOG_MODULE 0

#include <libsrslog/log.h>

int
main(int argc, char **argv)
{
	log_setprgnam("logtest");
	log_regmod(0, "mod1");
	log_regmod(1, "mod2");
	A("always");
	T("trace");
	V("vivi");
	D("debug");
	I("info");
	N("notice");
#undef LOG_MODULE
#define LOG_MODULE 1
	W("warning");
	E("error");
	C("critical");
	return EXIT_SUCCESS;
}
