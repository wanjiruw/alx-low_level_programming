#include "main.h"
/**
 * _isupper - checks for uppercase letters
 *@c: character is the ASCII code
 *
 *Return: 1 for uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65  && c <= 90)
		return (1);
	else
		return (0);
}

