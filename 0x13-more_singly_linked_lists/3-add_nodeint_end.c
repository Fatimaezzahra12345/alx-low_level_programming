#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end()-add_nodeint_end()
 * @head:  parameter
 * @n: a aparameter
 *
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *now;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	now = *head;
	if (now == NULL)
		*head = new;
	else
	{
		while (now->next != NULL)
			now = now->next;
		now->next = new;
	}
	return (*head);
}

