#include "main.h"
/**
 * print_triangle - prints triangle followed by newline
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int x, j;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			_putchar ('#');
			_putchar ('\n');
			for (j = 0; j < size ; j++)
			{
				_putchar ('#');
			}
		}
		_putchar ('\n');
	}
}
