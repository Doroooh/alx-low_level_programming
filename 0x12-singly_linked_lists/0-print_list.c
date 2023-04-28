#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%lu] ", current->len);
		if (current->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", current->str);
		current = current->next;
		count++;
	}
	return (count);
}
