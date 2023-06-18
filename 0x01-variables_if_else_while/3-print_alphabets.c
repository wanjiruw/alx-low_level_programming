#include <stdio.h>
/**
 *main - Entry point of program
 *Description: 'Print alphabet lowercase and then in uppercase'
 *Return: always zero
 */
int main(void)
{
	int n = 97;
	int h = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (h <= 90)
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
