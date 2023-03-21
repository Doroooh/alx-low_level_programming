#include <unistd.h>

/**
  *_putchar - write character c to stdout
 * @c: the character to be printed
 *
 * Return: 1 (success).
 * on an error -1 to be returned.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
