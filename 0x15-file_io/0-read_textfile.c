#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- The prompt will be reading the text file print to the STDOUT.
 * @filename: this the text file being read in this project
 * @letters: this is the total number of letter that will be read
 * Return: a- this is the number of bytes that will be read and printed for this project, if the filename is NULL or function has failed
 * return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t a;
	ssize_t b;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	b = read(file_descriptor, buffer, letters);
	a = write(STDOUT_FILENO, buffer, b);

	free(buffer);
	close(file_descriptot);
	return (a);
}
