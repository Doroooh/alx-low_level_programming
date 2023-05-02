#include "lists.h"

/**
 * pop_listint - removes the head node of a linked list and returns its data
 * @head: a pointer to a pointer to the first node of the linked list
 *
 * Return: the data inside the removed node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (!head || !*head)
		return (0);
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
