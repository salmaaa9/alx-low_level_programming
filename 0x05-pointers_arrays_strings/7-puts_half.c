#include "main.h"

/**
 *puts_half - print the second half of string
 *@str : an array
 * Return :nothing
 */
void puts_half(char *str)
{
	int i;

	while (str[i] != '\0')
		i++;

	for ((i - 1) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
