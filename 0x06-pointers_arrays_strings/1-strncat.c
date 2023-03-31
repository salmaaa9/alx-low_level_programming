#include "main.h"

/**
 * _strncat - concatenates two strings till n
 *@dest:a string
 *@src:a string
 *@n: an int
 * Return: concatened string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i] = dest[i];
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
