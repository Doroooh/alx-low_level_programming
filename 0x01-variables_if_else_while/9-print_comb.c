#include <stdio.h>
/**
 * main -will print all possible combinations of teh single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		putchar(i + '0');
		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
