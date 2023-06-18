#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point of program
 *Description: 'Print alphabets lowercase'
 *Return: always zero
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
