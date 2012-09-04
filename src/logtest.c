/* srstest.c - (C) 2012, Timo Buhrmester
 * libsrslog - A srs lib
  * See README for contact-, COPYING for license information.  */

#include <stdlib.h>

#include <libsrslog/log.h>

int
main(int argc, char **argv)
{
	LOG_LEVEL(LOGLVL_DBG);
	D("sup");
	N("fgt");
	W("blah");
	LOG_FANCY(true);
	D("whoa");
	N("this is");
	W("so fancy but");
	E("this is it.");
	return EXIT_SUCCESS;
}
