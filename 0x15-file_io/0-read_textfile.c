#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * read_textfile - read a text file and prints it to posix stdout
 * @filename: name of the file containing letters
 * @letters: number of letters
 * Return: number of byte, 0 if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytes_read;

	if (filename == NULL)
	{
		fprintf(stderr, "Error: filename is NULL\n");
		return (0);
	}

	if (letters == 0)
	{
		fprintf(stderr, "Error: letters is 0\n");
		return (0);
	}

	file = fopen(filename, "read");

	if (file == NULL)
	{
		fprintf(stderr, "Error: could not open file '%s'\n", filename);
		return (0);
	}

	buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(file);
		fprintf(stderr, "Error: could not allocate memory for buffer\n");
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);

	if (bytes_read < 0 || write(STDOUT_FILENO, buffer, bytes_read) != bytes_read)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	free(buffer);
	fclose(file);

	return (bytes_read);
}
