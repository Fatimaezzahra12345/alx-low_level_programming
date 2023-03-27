#include "main.h"
/**
 * rev_string()-block rev_string()
 * @s: parameter
 */
void rev_string(char *s)
{
	int i = 0, j = 0, cpt = 0;
	char *a;

	while (s[i] != '\0')
	{
		a[j] = s[i];
		i++;
		j++;
		cpt++;
	}
	for (i = 0, j = cpt - 1; i < cpt, j >= 0; i++, j--)
		s[i] = a[j];
}

