#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *
 *@n: the input number as an integer
 *
 *Return: last digit
 */
int print_last_digit(int n)
{

	n = n % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
			return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
