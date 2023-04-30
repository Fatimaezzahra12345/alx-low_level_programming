#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index()-insert_nodeint_at_index()
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 *
 * Return: ..
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *T, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		T = *head;
		for (i = 0; i < idx - 1 && T != NULL; i++)
		{
			T = T->next;
		}
		if (T == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = T->next;
	T->next = new;
	return (new);
}

