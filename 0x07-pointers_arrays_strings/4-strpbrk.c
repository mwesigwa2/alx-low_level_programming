#include "main.h"
/**
 * _strpbrk - searches stgring for any set of bytes
 * @s: string to be searched
 * @accept: string containing bytes to search
 * Return: pointer to byte in s matching bytes in accept
 *
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int j;


	while (*s)
	{

		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}

		}
		s++;
	}
	return ('\0');
}
