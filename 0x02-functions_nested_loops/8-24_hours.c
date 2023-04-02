#include "main.h"
/**
 * jack_baur - make a clock
 * Return: nothing
 */
void jack_bauer(void)
{
	int j, i;

	for (j = 0; j < 24; j++)
	{
		for (i = 0; i < 60; i++)
		{
			if (j < 10 && i < 10)
			{
				_putchar('0');
				_putchar(48 + j);
				_putchar(':');
				_putchar('0');
				_putchar(48+i);
				_putchar('\n');
			}
			else if (j < 10)
			{
				_putchar('0');
				_putchar(48 + j);
				_putchar(':');
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar('\n');
			}
			else if (i < 10)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
				_putchar(':');
				_putchar('0');
				_putchar(48 + i);
				_putchar('\n');
			}
			else
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
				_putchar(':');
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar('\n');
			}
		}
	}
}
