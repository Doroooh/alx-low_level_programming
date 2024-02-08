#include "main.h"

/**
 * clear_bit - this sets a value for a bit to value 0
 * @n: pointer to the number being chnaged
 * @index:  index for bit to clear
 *
 * Return: for success result is 1, for failure result is -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;
	if (index < sizeof(n) * 8)
	{*n = (*n & ~mask);
		return (1);
	}
	return (-1);
}
