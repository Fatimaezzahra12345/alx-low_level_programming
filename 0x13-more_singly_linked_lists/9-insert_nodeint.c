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
	listint_t *new, *tmp;
	unsigned int i;

	new = *head;
	for (i = 0; new != NULL; i++)
	{
		if (i == idx)
		{
			tmp = malloc(sizeof(listint_t));
			if (tmp == NULL)
				return (NULL);
			tmp->n = n;
			tmp->next = new;
			tmp = new;
		}
	}
	return (NULL);
}

