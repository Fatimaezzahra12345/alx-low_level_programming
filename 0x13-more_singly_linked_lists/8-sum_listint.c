#include "lists.h"

/**
 * sum_listint()-sum_listint()
 * @head: parameter
 * Return: an int
 */
int sum_listint(listint_t *head)
{
	int num = 0;
	listint_t *new;

	new = head;
	if (new == NULL)
		return (0);
	while (new != NULL)
	{
		num += new->n;
		new = new->next;
	}
	return (num);
}
