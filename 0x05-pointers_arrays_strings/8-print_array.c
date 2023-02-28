#include "main.h"
#include <stdio.h>
/**
 * print_array - function prints n elements of array of integers
 * @a: pointer to array values
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	for (n = 0; a[n] < a; n++)
	{
		printf("%d, ", a[n]);
	}
	printf("\n");
}
