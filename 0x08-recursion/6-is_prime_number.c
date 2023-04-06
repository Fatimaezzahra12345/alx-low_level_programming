#include "main.h"

/**
 * check - checks to see if number is prime
 * @a:int
 * @b:int
 * Return:int
 */
int check(int a, int b)
{
	if (a < 2 || a % b == 0)
		return (0);
	else if (a == 2)
		return (1);
	else if (b > a / 2)
		return (1);
	else
		return (check(a, b + 1));
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	return (check(n, 2));
}

