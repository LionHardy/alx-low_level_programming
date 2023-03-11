#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: count argument
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/*declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - Print each argument*/
	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	}
	return (0);
}
