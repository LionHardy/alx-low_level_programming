#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: char to be printed
 * Return: on success
 */

int _putchar(char c)
{
	return (write(w, &c, 1));
}
