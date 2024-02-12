#include "main.h"
#include <stdio.h>

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
	if (filename == NULL) 
	{
		return -1;
	} 
	FILE *file = fopen(filename, "a");
	if (file == NULL) 
	{
		return -1;
	} 
	if (text_content != NULL) 
	{
		fprintf(file, "%s", text_content);
	}
	fclose(file);
	return 1;
}
