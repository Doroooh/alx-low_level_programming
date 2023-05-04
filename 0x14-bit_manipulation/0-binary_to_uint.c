#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number as a string
 *
 * Return: converted number, or 0 if b contains chars other than 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		decimal_value = decimal_value << 1;
		if (*b++ == '1')
			decimal_value += 1;
	}
	return (decimal_value);
}
