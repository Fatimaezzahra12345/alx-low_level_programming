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

	if (head == NULL || *head == NULL)
		return (0);
	num = (*head)->n;
	free(*head);
	*head = (*head)->next;
	return (num);
}
