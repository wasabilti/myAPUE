// get-ugid.c
// get uid and gid
//
#include "apue.h"

int
main(void)
{
	printf("uid = %d, gid = %d\n", getuid(), getgid());
	exit(0);
}
