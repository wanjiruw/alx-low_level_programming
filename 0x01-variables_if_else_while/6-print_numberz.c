#include <stdio.h>
/**
 *main - Entry point of program
 *Description: 'prints all single digit numbers of base using putchar'
 *Return: always zero
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
