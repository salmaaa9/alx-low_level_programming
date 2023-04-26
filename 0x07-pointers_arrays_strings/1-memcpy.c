#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 *@dest:a string to be copied to
 *@src:A string to copy
 *@n:no of indecises
 * Return:a pointer to first string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
