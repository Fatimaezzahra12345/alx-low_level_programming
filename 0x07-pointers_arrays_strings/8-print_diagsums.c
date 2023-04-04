#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int  c = 0, b, k = 0, p;

	for (b = 0; b < size; b++)
	{
		p = (b * size) + b;
                c += *(a+p);
	}
	for (b = 0; b < size; b++)
	{
		p = (b * size) + (size - 1 - b);
		k += *(a + p);
	}
	printf("%d, %d\n", c, k);
}



