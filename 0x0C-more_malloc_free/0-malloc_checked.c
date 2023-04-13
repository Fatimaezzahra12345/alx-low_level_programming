#include "main.h"
#include <stdlib>
/**
 * malloc_checked()-block malloc_checked()
 * @b: parameter
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

