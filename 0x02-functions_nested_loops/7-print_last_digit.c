#include "main.h"

/**
 * print_last_digit - prints the last digit
 *@n: an int
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 10)
	{
		_putchar('0' + (n % 10) * -1);
		return ((n % 10) * -1);
	}
	else
	{
		_putchar('0' + n % 10);
		return (n % 10);
	}
}
