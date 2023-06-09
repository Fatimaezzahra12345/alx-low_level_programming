#include "lists.h"
#include "stdlib.h"
/**
 * add_nodeint()-add_nodeint() block
 * @head: parameter
 * @n: parameter
 *
 * Return: ...
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
