#include "main.h"

/**
 *void puts2 - prints every other charachter
 *@str:an array
 * Return :nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}
