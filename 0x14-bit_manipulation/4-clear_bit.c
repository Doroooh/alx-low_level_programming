#include "main.h"

/**
 * clear_bit - this will set the value for a bit to value 0
 * @n:This is the pointer to the number being chnaged
 * @index: This is the index for the bit to clear
 *
 * Return: for a success the result is 1, for a failure result is -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ~((1UL << index) | ~(*n));
	return (1);
}
