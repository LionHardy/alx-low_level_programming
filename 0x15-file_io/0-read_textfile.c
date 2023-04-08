#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * read_textfile - read a text file and prints it to posix stdout
 * @filename: name of the file containing letters
 * @letters: number of letters
 *
 * Return: number of bytes
 * 0 if file cannot be read or opened
 * 0 if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *filename;

	filename = fopen("filename.txt", O_RDONLY);

	if (filename == NULL)
	{
		return (0);
	}
	fprintf(filename, "%s", "letters");

	fclose(filename);

	return (0);
}
