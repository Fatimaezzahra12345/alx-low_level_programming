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
	listint_t *T, *node;
	unsigned int i;

	T = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && T != NULL && index != 0; i++)
		T = T->next;
	if (T == NULL)
		return (-1);
	if (index == 0)
	{
		node = T->next;
		free(T);
		*head = node;
	}
	else
	{
		if (T->next == NULL)
			node = T->next;
		else
			node = T->next->next;
		free(T->next);
		T->next = node;
	}
	return (1);
}
