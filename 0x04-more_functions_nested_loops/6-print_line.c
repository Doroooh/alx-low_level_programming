#include "main.h"

/**
 * print_line - a straightline
 * @k: number if times
 * Return: zero always
 */

void print_line(int k)
{
	int i;

	for (i = 0; i < k; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
