#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of array elements
 * @size: size of the array elements
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x, len;
	void *array;/*array pointer to be returned*/
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;/*obtain the total size of the array*/
	array = malloc(len);
	if (array == NULL)
		return (NULL);

	str = array;

	for (x = 0; x < len; x++)
		str[x] = '\0';

	return (array);

}
