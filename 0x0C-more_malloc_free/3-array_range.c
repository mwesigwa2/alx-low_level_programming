#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: NULL if min>max
 */
int *array_range(int min, int max)
{
	int *array, x, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = min++;

	return (array);

}
