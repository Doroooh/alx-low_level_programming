#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         If the file cannot be opened or read, return 0.
 *         If the filename is NULL, return 0.
 *         If write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t bytes_read = 0;
    char *buffer;
    FILE *file;

    if (filename == NULL)
        return 0;

    file = fopen(filename, "r");
    if (file == NULL)
        return 0;

    buffer = malloc(sizeof(char) * (letters + 1));
    if (buffer == NULL)
    {
        fclose(file);
        return 0;
    }

    bytes_read = fread(buffer, sizeof(char), letters, file);
    if (bytes_read == -1)
    {
        fclose(file);
        free(buffer);
        return 0;
    }

    buffer[bytes_read] = '\0';
    printf("%s", buffer);

    fclose(file);
    free(buffer);

    return bytes_read;
}
