#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
#include <stddef.h>
/**
 * print_listint()-print_listint() block
 * @h: parameter
 * Return: an int
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h !=  NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}

