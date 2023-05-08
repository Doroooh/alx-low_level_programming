#include “main.h”

/**
*read-textfile - this will be reading the text file, then, will print it to the POSIX standard output
*@filename: this is the name of the file being read
*@letters: this will be the number of letter being read and printed
*
*Return: This will be showing the number of letters read and printed, if none will return 0
*/
ssize_t read_textfile(const char *filename, size_t letters);
{
	char *buffer;
	ssize_t file_descriptor, bytes_read, bytes_written;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}
	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}
