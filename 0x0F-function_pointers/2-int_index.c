#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array to be searched
 * @size:  size of array
 * @cmp: pointer to function to be used to compare values
 *
 * Return: returns the index of the first element for which
 *	the cmp function does not return 0
 *	If size <= 0, return -1
 *	If no element matches, return -1
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
