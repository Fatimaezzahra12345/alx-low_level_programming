#include "main.h"

/**
 * get_endianness-checks the endianness
 *
 * Return: int
 */
int get_endianness(void)
{
	int si;
	char *bi;

	si = 1;
	bi = (char *)&si;
	return (*bi);
}
