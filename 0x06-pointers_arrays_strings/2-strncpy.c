#include "main.h"
/**
 * _strncpy()-_strncpy()
 * @dest: parameter
 * @src: parameter
 * @n: parameetr
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
