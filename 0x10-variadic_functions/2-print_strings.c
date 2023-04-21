#include "variadic_functions.h"
/**
 * print_strings - Prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: number of unnamed parameters
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		if (va_arg(list, int) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(list, int));
		printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

