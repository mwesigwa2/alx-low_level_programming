#include "main.h"
/**
 * reverse_array - function that reverses contents of integer array
 * @a: array of integers
 * @n: number of elements to swap
 *
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
	for (x = 0; x < n ; x++)
	{
	}
}
