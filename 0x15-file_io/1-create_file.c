#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int create_file(const char *filename, char *text_content);

int create_file(const char *filename, char *text_content) {
    int fd, bytes_written, i;

    if (filename == NULL)
        return -1;

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
        return -1;

    if (text_content != NULL) {
        for (i = 0; text_content[i] != '\0'; i++)
            ;

        bytes_written = write(fd, text_content, i);
        if (bytes_written == -1)
            return -1;
    }

    close(fd);
    return 1;
}
