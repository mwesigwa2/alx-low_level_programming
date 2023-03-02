#include "main.h"
/**
 * _strncat - concatenates two strings using n bytes from src
 * @dest: resulting string after concatenation
 * @src: string to be concatenated
 * Return: pointer to resulting string dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, x;

	/*determine size of dest*/
	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}

	/*concatenate the strings*/
	for (x = 0; x < n; ++x, ++len)
	{
		dest[len] = src[x];
	}
	dest[len] = '\0';
	return (dest);
}
