#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: a and b
 */

void swap_int(int *a, int *b)

{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
