#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to a pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}

	listint_t *current_node = *head;

	while (current_node != NULL)
	{
		listint_t *next_node = current_node->next;
		free(current_node);

		current_node = next_node;
	}
	*head = NULL;
}
