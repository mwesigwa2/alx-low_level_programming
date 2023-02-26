#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: size of the square
 *
 */
void print_square(int size)
{
	int c, j;

	if (size <= 0)
	{
		_putchar ('#');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar ('#');
			}
			_putchar('\n');
		}
	}
}
