#include "lists.h"

/**
 * create_nodeint - creates a new node at the beginning of a linked list
 * @head: a pointer to the first node in the list
 * @value: the value to be stored in the new node
 *
 * Returns: a pointer to the new node, or NULL if it fails
 */
listint_t *create_nodeint(listint_t **head, const int value)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
