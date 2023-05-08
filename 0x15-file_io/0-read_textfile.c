#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints its content to STDOUT.
 * @filename: name of the file to be read
 * @letters: maximum number of letters to be read
 *
 * Return: The number of bytes read and printed, or 0 if the function fails or filename is NULL.
 */
ssize_t print_file_to_stdout(const char *filename, size_t letters);
{
	int fd, a;
	ssize_t d;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	d = read(fd, buf, letters);
	if (d == -1) {
		free(buf);
		close(fd);
		return (0);
	}
	a = write(STDOUT_FILENO, buf, d);
	free(buf);
	close(fd);

	if (a != d)
		return (0);
	return (a);
}
