#include "main.h"

/**
 * _strncpy - copies a string to another
 *@dest:a string
 *@src:a string
 *@n: an integer
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && dest[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (j; dest[j] != '\0'; j++)
	{
		dest[j] = dest[j];
	}
	dest[j] = '\0';
	return (dest);
}
