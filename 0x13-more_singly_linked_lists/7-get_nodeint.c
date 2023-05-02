#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a given index in a linked list
 * @head: pointer to the first node of the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node at index or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node = head;

	for (i = 0; current_node && i < index; i++)
	{
		current_node = current_node->next;
	}
	return (i == index && current_node ? current_node : NULL);
}
