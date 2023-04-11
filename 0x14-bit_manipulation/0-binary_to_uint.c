#include "main.h"

/**
* binary_to_uint - a function that converts a binary number to an unsigned int.
* @b: pointer to a string of 0 and 1 chars
* Return: converted number, or 0 if there is one or more chars in the
* string b that is not 0 or 1, or when b is NULL.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int k, j, x = 0, y = 0;

	if (b == NULL)
		return (0);

	while (b[y] != '\0')
		y++;

	for (j = 0; b[j] != 0; j++)
	{
		k = (b[j] - '0');
		if (k >= 2)
		{
			return (0);
		}
		else
		{
			x += (k * (1 << (y - 1)));
			y--;
		}
	}
	return (x);
}
