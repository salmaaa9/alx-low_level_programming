#include "main.h"

/**
 * print_array - prints char till n
 *@a:an array
 *@n:an int
 * Return :nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	printf("%d, ", a[i]);
	printf("\n");
}
