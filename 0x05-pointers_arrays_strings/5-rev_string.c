#include "main.h"

/**
 * rev_string - function reverses a string
 * @s: pointer to string that is to be reversed
 *
 */
void rev_string(char *s)
{
	char yy;
	int x, y, len;

	y = 0;
	len = 0;

	while (s[y] != '\0')
	{
		y++;
	}

	len = y - 1;

	for (x = 0; x < y / 2; x++)
	{
		yy = s[x];
		s[x] = s[len];
		s[len--] = yy;
	}
}
