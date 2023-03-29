#include "main.h"
/**
 * *_strcat()-*_strcat() block
 * @dest: parameter
 * @src: parameter
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
