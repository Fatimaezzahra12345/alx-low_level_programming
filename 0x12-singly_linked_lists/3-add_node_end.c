#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to the head of list_t list
 * @str: string to add
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new->len = n;
	new->next = NULL;
	current = *head;

	if (current == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	return (*head);
}
