#include "main.h"

/**
 * print_rev - prints string in reverse
 *@s:an array
 * Return :nothing
 */

void print_rev(char *s)
{
	int len;

	while (s[len] != '\0')
		len++;
	for (; len > -1; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
