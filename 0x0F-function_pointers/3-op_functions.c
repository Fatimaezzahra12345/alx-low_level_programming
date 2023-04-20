#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - function
  * @a: parameter
  * @b: parameter
  *
  * Return: int
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function
  * @a: parameter
  * @b: parameter
  *
  * Return: int
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function
  * @a: parameter
  * @b: parameter
  *
  * Return: int
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function
  * @a: parameter
  * @b: parameter
  *
  * Return: int
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - ...
  * @a: parameter
  * @b: parameter
  *
  * Return: int
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
