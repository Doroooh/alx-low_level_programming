#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - to set value of a bit to zero
 * @n: pointer to number to be changed
 * @index: index of bit to be cleared
 *
 * Return: 1 for success, -1 fo an error or a failure
 */
int clear_bit(unsigned long *n, unsigned int index)
{
	if (index >= sizeof(unsigned long) * 8)
		return (-1);

	unsigned long mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
