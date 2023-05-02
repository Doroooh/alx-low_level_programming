#include "lists.h"

/**
 * This function frees a linked list
 * @head: A pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tempNode;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		tempNode = (*head)->next;
		free(*head);
		*head = tempNode;
	}
}
