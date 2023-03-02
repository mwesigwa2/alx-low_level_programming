#include "main.h"
/**
 * leet - function that encodes a string
 * @s: string to be encoded
 * Return: s value
 */
char *leet(char *s)
{
	int x, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == s1[y])
			{
				s[x] = s2[y];
			}

		}
	}
	return (s);
}

