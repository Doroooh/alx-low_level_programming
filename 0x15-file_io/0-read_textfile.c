#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- It will read the text file print to STDOUT.
 * @filename: the file that is being read
 * @letters: this is the number of letters to be read
 * Return: l- the actual number of bytes read and also printed
 *        0 if it fails or if the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t l;
	ssize_t d;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	d = read(file_descriptor, buffer, letters);
	l = write(STDOUT_FILENO, buffer, d);

	free(buffer);
	close(file_descriptor);
	return (l);
}
