#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: the copy to string
 * @src: the copy from string
 * @n: number of bytes to copy
 * Return: dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len, x;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}

	return (dest);
}
