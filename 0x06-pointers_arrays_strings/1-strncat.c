#include "main.h"
/**
 * _strncat()-block
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, k = 0, cpt = 0;

	while (dest[i] != '\0')
		i++;
	for (k = 0; src[k] != '\0' && cpt < n; k++)
	{
		dest[i] = src[k];
		cpt++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
