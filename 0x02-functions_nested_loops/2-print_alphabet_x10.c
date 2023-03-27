#include <unistd.h>
#include "main.h"
/**
 *print_alphabet_x10  - prints the charachters lowercased
 * ten times using _putchar
 *Return: 1 (success)
 *        -1 on error
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
			_putchar(i);
		_putchar('\n');
	}
}
