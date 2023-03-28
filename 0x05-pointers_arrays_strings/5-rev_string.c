#include "main.h"

/**
 * rev_string - reverses the string
 *@s:an array
 * Return :nothing
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	while (s[i])
	{
		i++;
	}
	for(j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
}
