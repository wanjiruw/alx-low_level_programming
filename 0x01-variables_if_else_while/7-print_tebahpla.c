#include <stdio.h>
/**
 *main - Entry point of program
 *Description: 'prints the lowercase alphabet in reverse'
 *Return: always zero
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
			n--;
	}
	putchar('\n');
		return (0);
}
