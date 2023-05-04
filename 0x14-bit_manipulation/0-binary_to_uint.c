#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint()-binary_to_uint()
 * @b: parameter
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nm = 0;
	int size = 0, sum = 0, i;

	if (b == NULL)
		return (0);
	while (b[size] != '\0')
		size++;
	for (i = 0; i < size; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i = size;
	--i;
	while (i >= 0)
	{
		nm += (b[i--] - 48) << (sum++);
	}
	return (nm);
}


