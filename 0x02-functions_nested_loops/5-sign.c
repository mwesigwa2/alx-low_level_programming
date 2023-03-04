#include "main.h"
/**
 * print_sign - Prints the sign of a number
 *
 * @n: the number whose sign gets printed
 *
 * Return: 1 if n is greater than 0
 * 0 if n is equal to zero and
 * -1 if n is less than zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
