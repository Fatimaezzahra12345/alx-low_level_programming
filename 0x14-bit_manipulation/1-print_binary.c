#include "main.h"

/**
 * print_binary - prints binary representation of a decimal number
 * @n: decimal number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int aws;

	aws = n >> 1;
	if (aws)
		print_binary(aws);
	aws <<= 1;
	if (aws == n)
		_putchar('0');
	else
		_putchar('1');
}
