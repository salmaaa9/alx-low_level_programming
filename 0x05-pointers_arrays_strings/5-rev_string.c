#include "main.h"

/**
 * rev_string - reverses the string
 *@s:an array
 * Return :nothing
 */
void rev_string(char *s)
{
	int i, j;

	while (s[i])
	{
		i++;
	}
	char temp[i];

	while (i--)
	{
		temp[j] = s[i];
		j++;
	}
	s = temp;
}
