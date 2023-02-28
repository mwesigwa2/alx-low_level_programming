#include "main.h"
/**
 * print_rev - prints string in reverse followed by new line
 * @s: pointer to string
 *
 */
void print_rev(char *s)
{
	int x, len;

	len = _strlen(s);
	for (x = (len - 1); s[x] >= 0; x--)
	{
		_putchar (s[x]);
	}
	_putchar ('\n');

}
