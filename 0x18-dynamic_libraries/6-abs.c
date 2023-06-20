#include "main.h"
/**
 * _abs - function that returns the absolute value
 * @c: integer value to be returned
 *
 *
 * Return: returns 0 if number is zero, c multiplied by -1 if
 * number is less than 0
 *
 *
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = c * (-1);
		return (c);
	}
	else if (c > 0)
	{
		c = c * 1;
		return (c);
	}
	else if (c == 0)
	{
		c = 0;
		return (c);
	}
	return (0);
}
