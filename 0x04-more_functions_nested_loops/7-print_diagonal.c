#include "main.h"

/**
 * print-diagonal - print diagonal line
 * @a: input a variable
 * Return: void
 */

void print_diagonal(int a)
{
	int i, j;

	if (a <= 0)
		_putchar('\n');
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
