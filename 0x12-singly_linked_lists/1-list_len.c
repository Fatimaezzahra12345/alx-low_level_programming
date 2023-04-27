#include "lists.h"
/**
 * list_len()-block list_len()
 * @h: parameter
 * Return: number
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
