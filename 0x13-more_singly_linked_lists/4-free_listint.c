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
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
