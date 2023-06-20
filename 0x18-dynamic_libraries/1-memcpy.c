#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: resulting pointer
 * @src: source pointer
 * @n: number of bytes to be copied
 *
 * Return: dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	j = 0;

	for (i = 0; i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
