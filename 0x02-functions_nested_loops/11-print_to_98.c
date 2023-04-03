#include <stdio.h>
#include <time.h>
/**
 * print_to_98 - prints no from n to 98
 *@n: starting int
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n > 0 && n < 99)
	{
		for (i = n; i < 99; i++)
		{
			if (i != n)
				printf(", ");
			printf("%d", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 97 ; i--)
		{
			if (i != n)
				printf(", ");
			printf("%d", i);
		}
	}
	else
	{
		for (i = n; i < 99 ; i++)
		{
			if (i != n)
				printf(", ");
			printf("%d", i);

		}
	}
	putchar('\n');
}
