#include "main.h"
/**
 * times_table - prints times table
 * Return: nothing
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		do {
			if ((i * j) > 9)
			{
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
				_putchar(',');
				_putchar(' ');
				j++;
			}
			else
			{
				_putchar('0' + i * j);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				j++;
			}
		} while (j < 10);
		_putchar('\n');
	}
}
