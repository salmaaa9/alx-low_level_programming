#include "main.h"

/**
 * _strcpy - copies a string to string
 *@dest:a pointer to string
 *@src:a pointer to string
 * return :( a pointer to string) success
 *         (\0) when fail
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);

}
