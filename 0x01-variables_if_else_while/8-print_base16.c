#include <stdio.h>
/**
 * main - main block
 * Return: 0
 *
 */
int main(void)
{
	int n = 0;
	char c = 'a';

	while (n < 10)
		putchar(n + '0');
	while (c < 'g')
		putchar(c);
	putchar('\n');
	return (0);
}
