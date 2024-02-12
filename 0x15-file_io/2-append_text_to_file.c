#include "main.h"

/**
 * append_text_to_file -This will append the text at the end of the file.
 * filename: the pointer to the file name.
 * text_content: The string  added at the end of file. 
 * 
 * Return: If the function fails or filename is NULL 1.
 *         If the file does not exist the user lacks write permissions 1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, k, lm = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[lm];)
			lm++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	k = write(file, text_content, lm);

	if (file == -1 || k == -1)
		return (-1);

	close(file);

	return (1);
}
