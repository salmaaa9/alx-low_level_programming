#include "main.h"

/**
 * _print_rev_recursion - prints recurrsivily inverse
 *@s:a string
 * Return: nothinig
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_puts_recursion(s);
	s--;
	putchar(*s);
}
