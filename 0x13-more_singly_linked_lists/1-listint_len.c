#include "lists.h"

/**
 * linked_list_len - calculates the count of elements in a linked list
 * @head: a pointer to the first node of the linked list
 *
 * Returns: the count of nodes in the linked list
 */
size_t linked_list_len(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}
