#include "main.h"
/**
 * *_strcpy -  copy one string to another
 *@dest: parameter
 *@src: paramter
 *Return: 0 success
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
