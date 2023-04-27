#include "lists.h"
/**
 * print_list()- block print_list()
 * @h: parameter
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t nd = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nd++;
	}
	return (nd);
}
