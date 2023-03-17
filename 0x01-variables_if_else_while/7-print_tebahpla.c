#include <stdio.h>

/**
 * main - lowercase alphabets allowed in reverse order,
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z', ch >= 'a', ch--)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
