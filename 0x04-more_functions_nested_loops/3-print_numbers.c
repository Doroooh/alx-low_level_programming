#include "main.h"

/**
 * print_numbers - print from 0 to number 9
 * Return: zero always
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
