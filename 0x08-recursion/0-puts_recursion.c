#include "main.h"

/**
 * _puts_recursion - prints recurrsivily
 *@s:a string
 * Return: nothing
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	printf("%c", *s);
	s++;
	_puts_recursion(s);
}
