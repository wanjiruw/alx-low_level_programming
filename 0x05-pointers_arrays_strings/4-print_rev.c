#include "main.h"

/**
 *print_rev -  prints a string, in reverse
 *
 *@s: char
 *
 *Return: string
 */

void print_rev(char *s)
{
	int m;

	for (m = 0; s[m] != 0; m++)
	{
	}
	for (m = m - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
