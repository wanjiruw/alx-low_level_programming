#include <stdio.h>
/**
 *main - Entry point of program
 *Description: 'Print all single digit numbers of base 10 starting from 0'
 *Return: always zero
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
