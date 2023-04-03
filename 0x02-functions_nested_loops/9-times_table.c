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
				if (j)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
				j++;
			}
			else
			{
				if (j)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + i * j);
				j++;
			}
		} while (j < 10);
		_putchar('\n');
	}
}
