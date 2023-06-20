#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: sustring to find
 * @accept: string to use
 *
 * Return: n
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i, j;


	for (i = 0; s[i] != 0; i++)
	{
		n = 1;
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				n = 0;
				break;
			}
		}
		if (n == 1)
			break;

	}
	return (i);
}
