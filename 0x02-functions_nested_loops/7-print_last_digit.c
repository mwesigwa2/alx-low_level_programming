#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @y: number whose last digit is to be printed
 *
 * Return: y % 10
 */
int print_last_digit(int y)
{
	int x;

	x = (y % 10);
	if (x < 0)
	{
		x = (-1 * x);
	}
	_putchar (x + '0');

	return (x);
}
