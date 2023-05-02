#include "lists.h"

/**
 * create_nodeint_end - creates a new node at the end of a linked list
 * @head: a pointer to the first node in the list
 * @value: the value to be stored in the new node
 *
 * Returns: a pointer to the new node, or NULL if it fails
 */
listint_t *create_nodeint_end(listint_t **head, const int value)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
