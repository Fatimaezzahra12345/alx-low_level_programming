#include "main.h"
#include <stdlib>
/**
 * malloc_checked()-block malloc_checked()
 * @b: parameter
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		return (98);
	return (p);
}

