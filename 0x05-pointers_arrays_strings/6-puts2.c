#include "main.h"
/**
 *_strlen - returns length of a string
 *
 *@s: a pointer to a char
 *
 *Return: the length of a string
 */

int _sterlen(char *s)
{
	int k, m = 0;

	while (s[m] != '\0')
	{
		m++;
	}
	k = m;
	return (k);
}
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
	int size = _strlen(str);

	for (m = 0; m < size; m += 2)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
