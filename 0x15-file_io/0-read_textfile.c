#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads the text file print to STDOUT
 * file_name: this is the text file the program is reading
 * the_letters: this is the number of letters that will be read
 * Return: p- the actual number of bytes read and printed, gives 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *file_name, size_t the_letters)
{
	char *buf;
	ssize_t fd;
	ssize_t p;
	ssize_t t;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * the_letters);
	t = read(fd, buf,the_letters);
	p = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (p);
}
