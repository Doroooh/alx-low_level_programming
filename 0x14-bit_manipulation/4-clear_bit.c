#include "main.h"
#include <stdlib.h>

/**
 * Sets the value of a given bit to 0.
 *
 * @n : The pointer to number being changed.
 * index : index of bit being cleared
 * Return : 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index);
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
