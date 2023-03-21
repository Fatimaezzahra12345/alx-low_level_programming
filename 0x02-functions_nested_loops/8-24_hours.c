#include "main.h"
/**
 * jack_bauer()-block
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0 ; i < 23 ; i++)
	{
		if (i < 10)
		{
			_putchar('0' + 0);
		}
		_putchar('0' + i);
		for (j = 0 ; j < 59 ; j++)
		{
			if (i < 10)
			{
				_putchar('0' + 0);
			}
			_putchar('0' + j);
		}
	}
}
