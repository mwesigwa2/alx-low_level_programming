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
	unsigned int x, j, k;
	char *chk;


	for (x = 0; *(s + x + 1); x++)
	{
		k = 0;
		for (j = 0; *(accept + j + 1); j++)
		{
			if (*(s + x) == *(accept + j))
			{
				chk = s + 1;
				k = 1;
				break;
			}
			chk = 0;
		}
		if (k == 1)
			break;
	}
	return (chk);
}
