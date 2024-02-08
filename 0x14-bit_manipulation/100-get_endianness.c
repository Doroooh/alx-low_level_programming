#include "main.h"

/**
 * get_endianness - this will check whether a machine is big or small
 * Return: the result will be 0 for a big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *)&k;
	if (*c)
		return (1);
	return (0);
}
