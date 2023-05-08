#include "main.h"

/**
 * read_textfile - it will read the text file, and print the letters
 * @filename: this is the file to be read
 * @letters: this is the actual number of the letters to be printed.
 *
 * Return: this will print the number of letters is successful, if failure, return 0..
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	int filedescriptor;
	ssize_t nrd, nwr;
	char *buffer;

	if (!filename)
		return (0);

	filedescriptor = open(filename, O_RDONLY);

	if (filedescriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(filedescriptor, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(filedescriptor);

	free(buffer);

	return (nwr);
}
