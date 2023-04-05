#include "main.h"
/**
 * factorial()-block factorial()
 * @n: a parameter
 * Return: int
 */
int factorial(int n)
{
	int i;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	i = n * factorial(n - 1);
	return (i);
}
