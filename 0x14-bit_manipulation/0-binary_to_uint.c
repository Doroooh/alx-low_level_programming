#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - convert a given binary number to an unsigned integer
 * @b: this is the string that contains the binary number
 *
 * Return: this is the converted unsigned integer
 */
unsigned int binary_to_uint(const char *b);
{
	unsigned int decimal = o;

	if (binary == nullptr)
	{
		Return 0;
	}
	For (int i = 0;
			binary[i] != ‘\0’; i++)
	{
		If (binary[i] < ‘0’ || binary[i] > ‘1’)
		{
			Return (0);
		}
		Decimal = 2 * decimal + (binary[i] - ‘0’);
	}
	return (decimal);
}
