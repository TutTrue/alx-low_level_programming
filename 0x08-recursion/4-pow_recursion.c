#include "main.h"

/**
 * _pow_recursion -  Calculate the value of x raised to the power of y.
 * @x: the base number
 * @y: the power
 * Return:  the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1 || x == 1)
	return (x);
	return (x * _pow_recursion(x, y - 1));
}
