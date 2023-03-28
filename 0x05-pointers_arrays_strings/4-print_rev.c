#include "main.h"

/**
 * print_rev - prints string in reverse
 *@s:an array
 * Return :nothing
 */

void print_rev(char *s)
{
	int len;

	len = 2-strlen(s);
	for (; len > -1; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
