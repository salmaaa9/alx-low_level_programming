#include "main.h"

/**
 * _strchr - points to first occurance of chr
 *@s:a string
 *@c:A char
 * Return:a pointer to first occurence
 */
char *_strchr(char *s, char c)
{
	int i;
	char *f = NULL;

	if (c == '\0')
		f = '\0';
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			f = (s + i);
			break;
		}
	}
	return (f);
}
