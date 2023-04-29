#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint()-pop_listint() block
 * @head: parameter
 *
 *Return: an int
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *new;

	if (head == NULL || *head == NULL)
		return (0);
	num = (*head)->n;
	new = *head
	free(new);
	*head = (*head)->next;
	return (num);
}
