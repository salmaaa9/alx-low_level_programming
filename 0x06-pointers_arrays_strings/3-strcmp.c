#include "main.h"

/**
 * _strncpy - copies a string to another
 *@dest:a string
 *@src:a string
 *@n: an integer
 * Return: copied string
 */
int _strcmp(char *s1, char *s2)
{
	int i,c1,c2;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		c1 =s1[i]-'A';
		c2 =s2[i]-'A';
		if (c1 == c2)
			continue;
		else if ( c1 < c2)
		{
			break;
		}
		else if ( c1 > c2)
		{
			break;
		}
	}
	return (c1-c2);
}
