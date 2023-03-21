#include "main.h"
/**
 * print_last_digit()-block
 * @c: input
 * Return: res
 */
int print_last_digit(int c)
{
	int n;

	n = c % 10;
	if (c < 0)
	{
		_putchar(-n + '0');
		return (-n);
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
}
