#include "main.h"

/**
 * _islower - checking lowercase alphabets
 * @c: alphabet to check
 * return: 1 for lowercase alphabets 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
