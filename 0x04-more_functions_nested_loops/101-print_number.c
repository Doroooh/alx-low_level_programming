#include "main.h"

/**
 * print_number - print an integer
 * @a: input integer parameter
 * Return: zero always
 */

void print_number(int a)
{
	unsigned int i = a;

	if (a < 0)
	{
		_purchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
