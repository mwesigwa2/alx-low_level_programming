#include "main.h"
/**
 * puts2 - prints every other character starting with first
 * character followed by new line
 * @str: pointer to string
 *
 */
void puts2(char *str)
{
	int x, y;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y = y + 2)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
