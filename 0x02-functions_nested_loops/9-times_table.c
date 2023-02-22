#include "main.h"

/**
 * times_table - print 9 times table, starting with 0
 * Return: Empty output
 */

void times_table(void)

{
	int f, g, h, i, j;

	for (f = 0; f <= 9; f++)
	{
	for (g = 0; g <= 9; g++)
	{
	h = f * g;
	if (h > 9)
	{
	i = h % 10;
	j = (h - i) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(j + '0');
	_putchar(i + '0');
	}
	else
	{
	if (g != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(h + '0');
	}
	}
	_putchar('\n');
	}
}
