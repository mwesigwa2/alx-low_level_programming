#include "main.h"
/**
 * _isupper - checks for the uppercase character
 * @c: integer character to be checked
 * Return: 1 if is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
