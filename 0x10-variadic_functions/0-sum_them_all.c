#include "variadic_functions.h"
/**
 * sum_them_all - eturns the sum of all its parameters
 * @n: parameter
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
