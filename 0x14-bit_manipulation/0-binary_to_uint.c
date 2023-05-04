#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string of 0 and 1 chars.
 * Return: The converted number, or 0 if there is one or more chars in the string b that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (k = 0; k[i]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[k] - '0');
	}

	return (decimal_value);
}
