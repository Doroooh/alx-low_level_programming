#include "search_algos.h"
/**
 * linear_search - search a linear form in array for the element
 * @array: array list
 * @size: array size
 * @value: array value 
 *
 * Return: index where user looks for
 */

int linear_search(int *array, size_t size, int value)
{
	size_t r = 0;

	if (array == NULL)
		return (-1);

	for (; r < size; r++)
	{
		printf("Value checked array[%lu] = [%d]\n", r, array[r]);
		if (array[r] == value)
			return (r);
	} return (-1);
}
