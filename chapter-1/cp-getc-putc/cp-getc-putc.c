// cp-getc-putc.c
// Read from stdin using getc(), then write to stdout using putc()
//
#include "apue.h"

int
main(void)
{
	int		c;
	while ((c = getc(stdin)) != EOF)
		if ((putc(c, stdout)) == EOF)
			err_sys("output err");

	if (ferror(stdin))
		err_sys("input error");

	exit(0);
}
