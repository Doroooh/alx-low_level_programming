#include "main.h"

/**
 * flip_bits - the number of bits required to flip from one to another
 *
 * @n: this is unsigned long int number 1
 * @m: this is unsigned long int number 2
 *
 * Return: for success 1, for failure -1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, index; 

	index = n ^ m;
	while (index > 0)
	{
		if (index & 1)
		{
			mask ++;
		}
	index >>= 1;
	}
	return (mask);
}
