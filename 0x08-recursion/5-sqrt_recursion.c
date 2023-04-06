#include "main.h"

/**
 * check - checks for the square root
 * @a:int
 * @b:int
 *
 * Return: int
 */
int check(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	if (a == 0)
		return (0);
	return (check(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	return (check(n, 1));
}

