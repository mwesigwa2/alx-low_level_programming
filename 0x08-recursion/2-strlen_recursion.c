#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be returned
 * Return: length of string
 *
 *
 *
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x = x + _strlen_recursion(s + 1);
	}

	return (x);

}
