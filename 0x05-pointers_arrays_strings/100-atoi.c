#include "main.h"

/**
 * _atoi - converts string to int
 *@s:a string
 * Return: int
 */

int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');
		}
		else if (n > 0)
			break;
	}
	n = sign * n;
	return (n);
}

