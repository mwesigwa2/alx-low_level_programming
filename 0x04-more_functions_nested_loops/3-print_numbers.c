#include "main.h"
/**
 * print_numbers - prints numbers, from 0 to 9
 * followed by a newline
 * _putchar - to be used twice
 * Return: Always 0
 *
 */
void print_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
