#include "main.h"

/**
 * flip_bits - this will count the number of bits to be changed, get one number from another
 * @n: this is number 1
 * @m: this is number 2
 *
 * Return: This is the number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		current = (exclusive >> i) & 1;
		if (current == 1)
			count++;
	}
	return (count);
}
