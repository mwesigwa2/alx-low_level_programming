#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return 0
 *
 */
void times_table(void)
{
	int x, j, k;

	for (x = 0; x <= 9; x++)
	{
		for (j = 1; j <= 9; j++)
		{
			k = (x * j);
			if ((k / 10) > 0)
			{
				_putchar ((k / 10) + '0');
			}
			else
			{
				_putchar (' ');
			}
			_putchar ((k % 10) + '0');

			if (j < 9)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
