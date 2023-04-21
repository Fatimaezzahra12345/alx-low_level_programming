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
	char *ptr;

	va_start(list, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(list, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s", ptr);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

