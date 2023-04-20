#include "variadic_functions.h"
/**
 * sum_them_all - eturns the sum of all its parameters
 * @n: parameter
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ab;
	unsigned int i;
	int sum = 0;
	
	va_start(ab, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ab, int);

	va_end(ab);

	return (sum);
}
