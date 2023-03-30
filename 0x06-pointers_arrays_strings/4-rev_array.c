#include "main.h"
/**
 * reverse_array()-reverse_array()
 * @a: parameter
 * @n: parameter
 */
void reverse_array(int *a, int n)
{
	int i, c = n - 1;
	int b;

	for (i = 0; i < (n  / 2); i++)
	{
		b = a[i];
		a[i] = a[c];
		a[c] = b;
		c--;
	}
}
