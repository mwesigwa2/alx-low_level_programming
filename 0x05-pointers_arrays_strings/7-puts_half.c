#include "main.h"
/**
 * puts_half - a function that prints half the string
 * if odd then print last n character, where where n =
 * (length_of_the_string - 1) / 2
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int a, n, x;

	x = 0;
	for (a = 0; str[a] != '\0'; a++)
			x++;
	n = (x / 2);
	if ((x % 2) == 1)
		n = ((x + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
