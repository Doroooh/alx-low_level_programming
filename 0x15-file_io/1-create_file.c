#include "main.h"

/**
 * create_file - This will create a file.
 * filename: The pointer to the name of created file. 
 * text_content: A pointer to the string to use in file writing.
 *
 * Return: If the function fails 1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int file, k, lm  = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lm = 0; text_content[lm];)
			lm++;
	}
	
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	k = write(file, text_content, lm);

	if (file == -1 || k == -1)
		return (-1);

	close(file);

	return (1);
}
