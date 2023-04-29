#include "lists.h"
#include <stdio.h>
#include <stdlib>

/**
 * listint_len()-listint_len() block
 * @h: a parameter
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
