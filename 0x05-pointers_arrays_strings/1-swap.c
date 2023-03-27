#include "main.h"
/**
 * swap_int()-block swap_int
 * @a: parameter
 * @b: parameter
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
