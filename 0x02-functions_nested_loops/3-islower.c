#include "main.h"

/**
 * _islower - checking lowercase characters
 * @c: chaacter to check
 * Return: 1 for lowercase characters 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
