#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{
	int a, f;

	for (a = 0; f <= 98; a++)
	{

	for (f = a + 1; f <= 99; f++)
	{
	putchar((a / 10) + '0');
	putchar((a % 10) + '0');
	putchar(' ');
	putchar((f / 10) + '0');
	putchar((f % 10) + '0');
	if (a == 98 && f == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
