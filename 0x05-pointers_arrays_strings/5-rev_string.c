#include "main.h"

/**
 * rev_string - function reverses a string
 * @s: pointer to string that is to be reversed
 *
 */
void rev_string(char *s)
{
	int x = 0, len;

	len = _strlen(s) - 1;
	while (len > x)
	{
		swap_char((s + len), (s + x));
		x++;
		len--;
	}

}


/**
 *  * _strlen - function that returns the length of a string
 *   * @s: string whose length is returned
 *    * Return: 1
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	return (x);
}

/**
 *  * swap_int - function that swaps values of two integers
 *   * @a: integer pointer 1
 *    * @b: integer pointer 2
 *
 */
void swap_char(char *a, char *b)
{
	char x;

	x = *a;
	*a = *b;
	*b = x;
}
