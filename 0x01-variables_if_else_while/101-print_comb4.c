#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{
	int d, p, s;

	for (d = '0'; d < '9'; d++)
	{

	for (p = d + 1; p <= '9'; p++)
	{

	for (s = p + 1; s <= '9'; s++)
	{
	if ((p != d) != s)
	{
	putchar(d);
	putchar(p);
	putchar(s);
	if (d == '7' && p == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
