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
	int a = size - 1, c = 0, b, d = 0, k = 0;

	for (b = 0; b < size; b++)
	{
		c += a[b][d];
		d++;
	}
	for (b = size - 1; b <= 0; b--)
	{
		k += a[b][a];
		a--;
	}
	printf("%d", c);
	printf("%d", k);
}



