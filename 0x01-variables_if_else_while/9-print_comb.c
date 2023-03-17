#include <stdio.h>
/**
 * main -will print all possible combinations of teh single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		putchar(n + '0');
		if (n < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
