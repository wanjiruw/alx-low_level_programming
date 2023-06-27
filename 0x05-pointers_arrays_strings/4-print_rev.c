#include "main.h"

/**
 *print_rev -  prints a string, in reverse
 *
 *@s: char
 *@c: char
 *
 *Return: string
 */

void print_rev(char *s)
{
	int m;
	char c;

	for (m = 0; s[m] != 0; m++)
	{
	}
	for (m = m - 1; m >= 0; m--)
	{
		c = s[m];
			_putchar(c);
	}
	_putchar('\n');
}
