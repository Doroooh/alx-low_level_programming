#include "main.h"

/**
 * create_file - This will create a file.
 * filename: the pointer to the name of the created file.
 * text_content: Pointer to string that writes the file.
 *
 * Return: If the function fails return , Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int k, p, len = 0;
       	if (filename == NULL)
	       	return -1;
	if (text_content != NULL)
	{
		len = strlen(text_content);
	}
	k = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (k == -1)
		return -1;
	p = write(k, text_content, len);
	if (p == -1)
	{
		close(k);
		return -1;
	}
	close(k);
	return 1;
}
