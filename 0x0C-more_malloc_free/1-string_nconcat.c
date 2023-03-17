#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes in s2
 * Return: NULL if function fails.
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int len = n, y;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (y = 0; s1[y]; y++)
		len++;

	x = malloc(sizeof(char) * (len + 1));

	if (x == NULL)
		return (NULL);

	len = 0;

	for (y = 0; s1[y]; y++)
		x[len++] = s1[y];

	for (y = 0; s2[y] && y < n; y++)
		x[len++] = s2[y];

	x[len] = '\0';
	return (x);
}
