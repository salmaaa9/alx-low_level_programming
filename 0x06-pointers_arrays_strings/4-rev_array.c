#include "main.h"

/**
 * reverse_array - reverses array of int
 *@a:an array
 *@n:a size of arrat
 *@n: an int
 * Return: reversed array
 *
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;

	}
}
