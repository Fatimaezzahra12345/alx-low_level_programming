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
	listint_t *next;
	while (head != NULL)
	{
		next = head;
		head = head->next;
		free(next);
	}
}