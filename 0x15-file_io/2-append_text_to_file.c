#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "a");

	if (file == NULL)
		return (-1);

	if (text_content != NULL)
	{
		fprintf(file, "%s", text_content);
	}

	fclose(file);

	return (1);
}
