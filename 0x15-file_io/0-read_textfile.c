#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Will read the text file and print it to the STDOUT.
 * @filename: Name of the text file being read.
 * @letters: Number of letters to read and to be printed.
 * Return: a- actual number of the letters read and are printed.
 *         If the file cannot be opened or read, return 0.
 *         If the filename is NULL, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t a;
	ssize_t t;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(file, buffer, letters);
	a = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(file);
	return (a);
}
