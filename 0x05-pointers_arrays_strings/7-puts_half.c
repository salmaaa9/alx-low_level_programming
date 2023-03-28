#include "main.h"

/**
 *puts_half - print the second half of string
 *@str : an array
 * Return :nothing
 */
void puts_half(char *str)
{
	int  i = 0, j = 0, n;

	while (str[i] != '\0')
		i++;
	n = (i - 1) / 2;
	for (j = n + 1; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
