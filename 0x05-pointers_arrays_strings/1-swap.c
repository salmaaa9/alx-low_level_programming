#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *@a:a pointer to int
 *@b:a pointer to int
 * Return :nothing
 */
void swap_int(int *a, int *b)
{
	int temp;
	 temp = *a;
	 *a = *b;
	 *b = temp;
}
