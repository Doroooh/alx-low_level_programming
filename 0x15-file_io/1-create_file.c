#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int create_file(const char *filename, char *text_content);
{
	int file, bytes_written, a;
	
	if (filename == NULL)
		return -1;
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return -1;
	
	if (text_content != NULL) 
	{
		for (a = 0; text_content[a] != '\0'; a++);
		bytes_written = write(file, text_content, a);
		if (bytes_written == -1)
			return -1;
	}
	close(file);
	return 1;
}
