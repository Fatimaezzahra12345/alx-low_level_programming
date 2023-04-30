#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index()-delete_nodeint_at_index()
 * @head: parameter
 * @index: parameter
 * Return: an int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i

	if (head == NULL)
		return (-1);
	for (i = 0; i < index && tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (-1);
	free(tmp->next);
	tmp->next = (tmp->next)->next;
	return (1);
}

