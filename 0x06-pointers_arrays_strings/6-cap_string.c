#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: string to be capitalized
 * Return: s
 */
char *cap_string(char *s)
{
	int x = 0;

	while (s[x])
	{
		while (!(s[x] >= 'a' && s[x] <= 'z'))
		{
			x++;
		}
		if (s[x - 1] == ' ' ||
		s[x - 1] == ',' ||
		s[x - 1] == ';' ||
		s[x - 1] == '.' ||
		s[x - 1] == '!' ||
		s[x - 1] == '?' ||
		s[x - 1] == '"' ||
		s[x - 1] == '(' ||
		s[x - 1] == ')' ||
		s[x - 1] == '{' ||
		s[x - 1] == '}' ||
		s[x - 1] == '\t' ||
		s[x - 1] == '\n' ||
		x == 0)
		{
			s[x] -= 32;
		}
		x++;
	}
	return (s);
}



