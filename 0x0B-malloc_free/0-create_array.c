#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, initializes
 * it with a specific char
 * @size: size of array
 * @c: charcater to initialize array
 * Return: 0
 *
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	x = malloc(size * sizeof(char));
	if (size == 0 || x == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		x[i] = c;
		i++;
	}
	return (x);
}

