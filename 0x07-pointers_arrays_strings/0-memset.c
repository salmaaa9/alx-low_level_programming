#include "main.h"

/**
 * _memset - fills the first n bytes of s by b
 *@s:a string
 *@b:A char
 *@n:no of indecises
 * Return:a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
