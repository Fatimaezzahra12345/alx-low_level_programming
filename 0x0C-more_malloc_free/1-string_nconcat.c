#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i = 0, j = 0;
	char *p;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		while (s1[i] != '\0')
		{
			len1++;
			i++;
		}
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		while (s1[j] != '\0')
		{
			len2++;
			j++;
		}
	}
	if (len2 > n)
		len2 = n;
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < len2; i++, j++)
		p[i] = s2[j];
	p[len1 + n] = '\0';
	return (p);
}

