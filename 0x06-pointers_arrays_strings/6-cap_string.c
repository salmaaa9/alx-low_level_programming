#include "main.h"

/**
 * cap_string - capitilaizies string
 *@s:a string
 * Return:  string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'
			|| s[i - 1] == '.' ||  s[i - 1] == ',' ||
			s[i - 1] == '?' || s[i - 1] == ';' || s[i - 1] == '!'
			|| s[i - 1] == '('
			|| s[i - 1] == ')' || s[i - 1] == '{' 
			|| s[i - 1] == '}' || s[i - 1] == '"')
		{
			if (s[i] > 96 && s[i] < 123)
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
