#include "main.h"
/**
 *print_alphabet - prints the charachters lowercased
 * using _putchar function
 *Return: 1 (success)
 *        -1 on eror
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
}
