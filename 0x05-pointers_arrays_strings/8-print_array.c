#include "main.h"
#include <stdio.h>
/**
 * print_array - function prints n elements of array of integers
 * @a: pointer to array values
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == 0)
		{
			printf("%d", a[x]);
		}
		else
		{
			printf(", %d", a[x]);
		}
	}
	printf("\n");
}
