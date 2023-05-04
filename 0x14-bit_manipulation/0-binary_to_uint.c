#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - convert a given binary number to an unsigned integer
 * @b: this is the string that contains the binary number. It will contain a string of 0 and 1 characters.
 *
 * Return: this is the converted unsigned integer or 0 when the characters are one or more in string b that’s not a 0 or 1.
 */
unsigned int binary_to_uint(const char *b);
{
	int i;

	unsigned int decimal_value = 0;

	if (!b)
		return (0);
	for (; *b != '\0'; ++b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result <<= 1;
		result += (*b - '0');
	}
	return (decimal_value);
}
