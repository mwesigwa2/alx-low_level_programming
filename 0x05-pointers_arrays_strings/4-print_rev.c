#include "main.h"
#include <string.h>
/**
 * print_rev - prints string in reverse followed by new line
 * @s: pointer to string
 *
 */
void print_rev(char *s)
{
	int x, len;

	len = 0;
	while (s[len] != '\0')
		len++;

	for (x = (len - 1); x >= 0; x--)
	{
		_putchar (s[x]);
	}
	_putchar ('\n');

}
