#include "main.h"
/**
 * _islower()-block _islower
 * @c: input
 * Return:1 or 0
 */
int _islower(int c)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		if (c == a)
			return (1);
	}
	return (0);
}
