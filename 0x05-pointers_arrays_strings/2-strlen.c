#include "main.h"
/**
 * _strlen()-block _strlen()
 * @s: parameter
 * Return : an integer
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

