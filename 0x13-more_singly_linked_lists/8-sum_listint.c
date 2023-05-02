#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a linked list
 * @head: pointer to the first node of the linked list
 *
 * Return: the sum of all data in the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
