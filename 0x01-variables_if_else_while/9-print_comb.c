#include <stdio.h>
/**
 *main - Entry point of program
 *Description: 'Print alphabet lowercase and then in uppercase'
 *Return: always zero
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
		continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
