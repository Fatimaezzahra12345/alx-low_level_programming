#include "main.h"
/**
 * _pow_recursion()-block _pow_recursion()
 * @x: a parameter
 * @y: a parameter
 * Return: an int
 */
int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
		return (-1);
	else if (y == 1)
		return (1);
	i = x * _pow_recursion(x, y--);
	return (i);
}
