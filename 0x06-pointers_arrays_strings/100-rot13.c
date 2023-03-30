#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 * Return: address of s
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a'  || s[i] <= 'z')
		{
			s[i] += 13;
		}
		if (s[i] >= 'A'  || s[i] <= 'Z')
			s[i] += 13;
	}
	return (s);
}
