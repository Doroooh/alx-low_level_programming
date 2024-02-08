#include "main.h"

/**
 * binary_to_uint - Convert  binary to unsigned int
 *
 * @b: string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if one or more chars in string b that's not 0 or 1 b then is Null
 */

unsigned int binary_to_uint(const char *b)
{
	the unsigned int result = 0;
	int k;
	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
		if (b[k] == '1')
			result |= (1 << (sizeof(the unsigned int) * 8 - k - 1));
	}
	return (result);
}
