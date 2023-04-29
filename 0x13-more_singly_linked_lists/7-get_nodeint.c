#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index()-get_nodeint_at_index() block
 * @head: parameter
 * @index: parameter
 *
 * Return: ...
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new = head;
	for (i = 0; new != NULL; i++)
	{
		if (i == index)
			return (new);
		new = head->next;
	}
	return (NULLL);
}
