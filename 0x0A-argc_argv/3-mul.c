#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a *b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
