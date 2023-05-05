#include "main.h"

/**
 * get_endianness - this will check whether a machine is big or small
 * Return: the result will be 0 for a big one, one for little
 */
int get_endianness(void)
{
	uint32_t i = 1;
	uint8_t *c = (uint8_t *) &i;

	return (int *c);
}
