#include "main.h"

/**
* binary_to_uint - a function that converts a binary number to an unsigned int.
* @b: pointer to a string of 0 and 1 chars
* Return: converted number, or 0 if there is one or more chars in the
* string b that is not 0 or 1, or when b is NULL.
*/


unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int y = 0; /*length counter*/

	if (b[y] == '\0')
		return (0);

	while (b[y])
	{
		if ((b[y] == '0') || (b[y] == '1'))
		{
			x <<= 1;
			x += b[y] - '0';
		}
		else
		{
			return (0);
		}
		y++;

	}
	return (x);
}
