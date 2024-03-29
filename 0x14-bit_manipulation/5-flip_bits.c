#include "main.h"
#include <stdio.h>

/**
 * int flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: ...
 * @m: ...
 * Return: ...
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;

	unsigned int count = 0;

	while (xor != 0)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
