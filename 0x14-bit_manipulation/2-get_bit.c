#include "main.h"

/**
 * get_bit - this will return the value of a bit as an index in a decimal number
 * @n: this is the number to get
 * @index: ths is the bit index
 *
 * Return: this is the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return (n >> index & 1);
}
