#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number as a string
 *
 * Return: converted number, or 0 if b contains chars other than 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int number;

	number = 0;
	if (!b)
		return (0);
	for (c = 0 ; b[c] != '\0'; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return(0);
	}
	for (c=0; b[c] != '\0' ; c++)
	{
		num << = 1;
		if (b[c] == '1')
			number + = 1;
	}
	return (number);
}
