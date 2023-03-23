#include "main.h"
/**
 * print_triangle()-block
 * @size: parameter
 */
void print_triangle(int size)
{
	int i, j;

	for (i = size ; i > 0 ; i--)
	{
		for (j = 0 ; j < i - 1 ; j++)
			_putchar(' ');
		for (k = 0 ; k < size - j ; k++)
			_putchar('#');
	}
	_putchar('\n');
}
