#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: number of elements array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

/*use malloc to define values*/

buffer = (char *) malloc(size * sizeof(c));

if (buffer == 0)
{
	return (NULL);
}

else
{
	position = 0;
	while (position < size)
	{
		*(buffer + position) = c;
		position++;
	}

	return (buffer);
}
}
