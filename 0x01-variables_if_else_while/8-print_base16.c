#include <stdio.h>

/**
 * main - prints numbers between 0 to 9 an the letters between a and f
 * Return: Always 0
 */
int main(void)
{
	int c;

	int d;

	c = 'a';
	while
		(d < 10)
		{
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f')
		{
			putchar(c);
			c++;
		}
	putchar ('\n');
	return (0);
}
