#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t list
 * @h: parameter
 *
 * Return: an int
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *new;
	size_t num;

	new = h, num = 0;
	while (new)
	{
		printf("%d\n", new->n);
		num++;
		new = new->next;
	}
	return (num);
}
