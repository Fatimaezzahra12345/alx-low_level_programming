#include "lists.h"
#include <stdlib.h>

/**
 * free_listint()-free_listint() block
 * @head: parameter
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
