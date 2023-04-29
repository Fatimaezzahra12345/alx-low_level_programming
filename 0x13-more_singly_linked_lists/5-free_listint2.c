#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2()-free_listint2()
 * @head: parameter
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		new = *head;
		*head = (*head)->next;
		free(new);
	}
}

