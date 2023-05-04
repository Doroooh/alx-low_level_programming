#include "main.h"

/**
 * print_binary - this will be printing the binary representation of a number.
 *
 * @n: this is the number to be printed.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1ul << 63;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
