#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints alphabet excluding q and e
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z')
		{
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar ('\n');
	return (0);
}
