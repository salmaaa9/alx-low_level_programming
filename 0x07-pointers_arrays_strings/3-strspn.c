#include "main.h"

/**
 * _strspn - counts no of char
 *@s:a string
 *@accept:A string
 * Return:no of char
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	unsigned int n = 0;

	while (accept[i] != '\0')
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				n++;
				break;
			}
		}
		i++;
	}
	if (n != 0)
	n++;
	return (n);
}
