#include "main.h"
/**
 * _pow_recursion - returns value of x raised to power of y
 * @x: integer to use
 * @y: the power to raise to
 * Return: x^y
 *
 */
int _pow_recursion(int x, int y)
{
	int j = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	j = j * _pow_recursion(x, y - 1);

	return (j);
}
