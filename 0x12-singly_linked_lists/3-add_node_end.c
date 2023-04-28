#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to a pointer to the first node of the list
 * @str: String to be stored in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL, *last_node = NULL;
	size_t len = 0;

	if (!head || !str)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	len = strlen(str);
	new_node->len = len;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	last_node = *head;
	while (last_node->next)
		last_node = last_node->next;
	last_node->next = new_node;
	return (new_node);
}
