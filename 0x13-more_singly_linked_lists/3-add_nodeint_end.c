#include "lists.h"

/**
 * This function adds a new node at the end of a linked list
 * @head: A pointer to the first element in the list
 * @n: The data to be inserted in the new element
 *
 * Return: A pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *currentNode = *head;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (currentNode->next)
	{
		currentNode = currentNode->next;
	}
	currentNode->next = newNode;
	return (newNode);
}
