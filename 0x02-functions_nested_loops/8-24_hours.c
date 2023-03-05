#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: 0
 *
 */
void jack_bauer(void)
{
	int x, j;

	for (x = 0; x < 24; x++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar ((x / 10) + '0');
			_putchar ((x % 10) + '0');
			_putchar (':');
			_putchar ((j / 10) + '0');
			_putchar ((j % 10) + '0');
			_putchar ('\n');
		}
	}
}
