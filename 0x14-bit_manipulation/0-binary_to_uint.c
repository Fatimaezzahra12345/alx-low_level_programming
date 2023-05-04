#include "main.h"

/**
 * binary_to_uint()-binary_to_uint()
 * @b: parameter
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int uint, pow;

	if (!b)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	--i, uint = 0, pow = 0;
	while (i >= 0)
	{
		uint += (b[i--] - 48) << (pow++);
	}
	return (uint);
}
