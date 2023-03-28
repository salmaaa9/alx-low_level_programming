#include "main.h"

/**
 * _puts - prints string
 *@str:an array
 * Return :nothing
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{	
		-putchar(str[i]);
		i++;
	}
	-putchar('\n');
}
