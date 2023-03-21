#include "main.h"

/**
 * _isalpha - checking alphabet character
 * @c: charcater to check
 * Return: 1 for an alphabet character or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) | (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
