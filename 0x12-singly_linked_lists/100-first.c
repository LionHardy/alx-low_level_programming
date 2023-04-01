#include <stdio.h>

void __attribute__((constructor)) race(void);

/**
 * race -  prints given input, before main function is executed
 *
 */

void race(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
