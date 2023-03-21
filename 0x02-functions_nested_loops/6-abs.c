#include "main.h"

/**
 * _abs - compute absolute value for integer
 * @c: number to compute
 * Return: Absolute number of the number or a zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
