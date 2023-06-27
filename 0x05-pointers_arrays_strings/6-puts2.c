#include "main.h"
#include <string.h>

/**
 *puts2 - prints one char out of 2 in a string
 *
 *@str: a pointer to string
 *
 *Return: nothing
 */

void puts2(char *str)
{
	int m;
	int size = strlen(str);

	for (m = 0; m < size; m += 2)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
