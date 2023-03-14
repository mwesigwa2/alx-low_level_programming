#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int index, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len));

	if (concat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
	{
		concat[j++] = s1[index];
	}
	for (index = 0; s2[index]; index++)
	{
		concat[j++] = s2[index];
	}
	return (concat);
}
