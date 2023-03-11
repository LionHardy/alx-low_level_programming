#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments passed into it
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argcv*/
	printf("%i\n", argc - 1);

	return (0);
}
