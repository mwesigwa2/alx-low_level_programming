#include "main.h"
/**
 * string_toupper - function that changes lowecase letters of string
 * to uppercase
 * @s: string array
 * Return: char pointer
 *
 */
char *string_toupper(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		if ((s[x] >= 97) && (s[x] <= 122))
		{
			s[x] = s[x] - 32;
		}
		x++;
	}
	return (s);
}
