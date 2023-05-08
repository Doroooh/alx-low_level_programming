#include "main.h"

/**
 * create_file - this will create a file.
 * @filename: this is a pointer to name of file being created
 * @text_content: the pointer to a string for writing to the file
 *
 * Return: If function fails then -1.
 *         Otherwise will be 1.
 */
int create_file(const char *filename, char *text_content);
{
	int file_descriptor, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file_descriptor, text_content, len);

	if (file_descriptor == -1 || w == -1)
		return (-1);

	close(file_descriptor);
	return (1);
}
