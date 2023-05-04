#include "main.h"

/**
 * set_bit - to set the bit value to 1 at a predefibed index
 * @n: pointer to number to be modified
 * @index: index of bit being set
 *
 * Return: 1 if successful, or -1 if there's an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1ul << index);

	return (1);
}
