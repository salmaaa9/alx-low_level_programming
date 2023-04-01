#include "main.h"

/**
 * leet - create code
 *@s:a string
 * Return: coded string
 */
char *leet(char *s)
{
	unsigned int i;
	char map[] = {'A', 'E', 'O', 'T', 'L'};
	int x[] = {4, 3, 0, 7, 1};

	while (*s)
	{
		for (i = 0; i < (sizeof(map) / sizeof(char)); i++)
		{
			if (s[i] == map[i] || s[i] == map[i] + 32)
				s[i] = 48 + x[i];
		}
		s++;
	}
	return (s);
}
