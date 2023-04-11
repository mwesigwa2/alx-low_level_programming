#include "main.h"

/**
* binary_to_uint - a function that converts a binary number to an unsigned int.
* @b: pointer to a string of 0 and 1 chars
* Return: converted number, or 0 if there is one or more chars in the
* string b that is not 0 or 1, or when b is NULL.
*/


unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, j = 0, y = 0, k;


	if (b == NULL)
		return (0);

	while (b[y] != '\0')
	{

		y++;
	}
	while (b[j] != 0)
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
		j++;
	}
	return (x);
}
