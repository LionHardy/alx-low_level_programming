#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase characters
 * @c: the character to be checked
 * Return: 1 for uppercase otherwise 0 for anything else
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
