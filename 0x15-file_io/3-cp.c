#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * creates_buffer - Allocates the 1024 bytes for a buffer.
 * file: The name of file buffer is storing chars for.
 *
 * Return: pointer to newly-allocated buffer.
 */
char *creates_buffer(char *file)
{
	char *buffer;
	void error_exit(const char *message) 
	{
		perror(message);
		exit(EXIT_FAILURE);
	}
	int main(int argc, char *argv[])
	{
		int file_from, file_to;
		ssize_t bytes_read, bytes_written;
		char buffer[BUFFER_SIZE];
		if (argc != 3) 
		{
			printf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		}
		file_from = open(argv[1], O_RDONLY);
		if (file_from == -1) 
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
		if (file_to == -1) 
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
		{
			bytes_written = write(file_to, buffer, bytes_read);
			if (bytes_written == -1) 
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
		if (bytes_read == -1) 
		{
			error_exit("read");
		}
		if (close(file_from) == -1) 
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
			exit(100);
		}
		if (close(file_to) == -1) 
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
			exit(100);
		}
		return 0;
}
