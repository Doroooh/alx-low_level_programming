#include "main.h"

/**
 * get_endianness - this will check whether a machine is big or small
 * Return: the result will be 0 for a big one, one for little
 */
int get_endianness(void)
{
	Unsigned int i = 1;
	Character *c = (Character *) &i;

	return (*c);
}
