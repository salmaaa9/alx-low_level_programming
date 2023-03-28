#include "main.h"

/**
 *puts_half - print the second half of string
 *@str : an array
 * Return :nothing
 */
void puts_half(char *str)
{
	int i, j;

	while (str[i] != '\0')
		i++;

	for (j = (i - 1) / 2; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
