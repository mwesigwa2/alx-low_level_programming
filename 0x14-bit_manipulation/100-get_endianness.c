#include "main.h"

/**
* get_endianness - function that checks for the endianness
* Return: 0 if big endian, 1 if little endian
*
*/

int get_endianness(void)
{
	int x = 1;
	char *endian = (char *)&x;

	if (*endian != 0)
		return (1);
	else
		return (0);
}
