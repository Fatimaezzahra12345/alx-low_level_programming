#include "main.h"
/**
 * _strlen_recursion()-block _strlen_recursion()
 * @s: parameter
 * Return: an int
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s)
	{
		i = (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
	return (i);
}
