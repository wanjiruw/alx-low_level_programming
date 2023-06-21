#include "main.h"
/**
 *print_sign - check the code for alphabetic character
 *
 *@n: the input number as an integer
 *
 *Return: 1 is greater than zero
 *-1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

