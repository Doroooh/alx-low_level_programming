#include <stdio.h>
/**
  *_putchar - write character c to stdout
 * @c: the character to be printed
 * Return: 1 (success).
 * if an error -1 to be returned.
 */
int_putchar(char c)
{
        return (write(1, &c, 1));
}
