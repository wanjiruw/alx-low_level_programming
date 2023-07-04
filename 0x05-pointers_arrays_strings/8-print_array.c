#include "main.h"
#include <stdio.h>

/**
 *print_array - print values in an array
 *@a: input value
 *@n: input value
 *Return: 0 success
 */

void print_array(int *a, int n)
{
	int i;

	if (n == 0)
	{
		n = sizeof(a);
	}

	for (i = 0; i < n; i++)
	{

		if (i == n - 1)

		{
			printf("%d", a[i]);
		}
		else
		{
			 printf("%d, ", a[i]);
		}
	}
}
