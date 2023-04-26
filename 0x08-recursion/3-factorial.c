#include "main.h"

/**
 * factorial - prints factorial recurrsivily
 *@n: an int
 * Return:factorial of no
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));

}
