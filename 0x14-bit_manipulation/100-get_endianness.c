#include "main.h"
#include <stdio.h>

/**
 * get_endiannes - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int a = 1;

	char *ptr = (char *) &a;

	return (*ptr == 1);
}
