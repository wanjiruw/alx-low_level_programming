#include "main.h"

/**
 *_puts -  prints a string, followed by a new line, to stdout
 *
 *@str: char
 *
 *Return: string
 */

void _puts(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)

		_putchar(str[m]);
	_putchar('\n');
}

