#include "main.h"

/**
 * _pow_recursion - power  recurrsivily
 *@x:an int
 *@y: no of times to be multiplied
 * Return: power
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
