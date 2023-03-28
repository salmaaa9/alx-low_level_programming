#include "main.h"

/**
 * puts2 - prints every other charachter
 *@str:an array
 * Return :nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		if (str[i + 2] != '\0')
		i = i + 1;
	}
	_putchar('\n');
}
