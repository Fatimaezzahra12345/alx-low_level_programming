#include "main.h"

/**
 * flip_bits-number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, pow;
	unsigned int first, a;

	first = 0;
	pow = 1;
	d = n ^ m;
	for (a = 0; a < (sizeof(unsigned long int) * 8); a++)
	{
		if (pow == (d & pow))
			first++;
		pow <<= 1;
	}
	return (first);
}
