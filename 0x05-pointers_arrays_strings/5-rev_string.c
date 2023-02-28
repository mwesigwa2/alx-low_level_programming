#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * rev_string - function reverses a string
 * @s: pointer to string that is to be reversed
 * _putchar - function call to _putchar
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void rev_string(char *s)
{
	int n, x;
	char *begin, *end, tmp;

	while (s[n] != '\0')
	{
		n++;
	}

	begin = s;
	end = s;
	for (x = 0; x < n - 1; x++)
		end++;

	for (x = 0; x < n / 2; x++)
	{
		tmp = *end;
		*end = *begin;
		*begin = tmp;

		begin++;
		end--;
	}
	_putchar(s[x]);
	_putchar('\n');
}
