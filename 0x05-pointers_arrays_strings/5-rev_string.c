#include "main.h"
/**
 *rev_string - reverses a string
 *
 *@s: char
 *
 *Return: string
 */

void rev_string(char *s)
{
	 int m = 0;
	 int j;
	 char c;
	 char d;

	while (s[m] != '\0')
	{
		m++;
	}
		m--;
	for (j = 0; j < m; j++)
	{
	c = s[j];
	d = s[m];
	s[j] = d;
	s[m] = c;
	m--;
	}
}


