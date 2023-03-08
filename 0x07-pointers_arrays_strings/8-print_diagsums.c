#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of 2 diagonals of square matrix
 * of integers
 * @a:array matrix
 * @size: integers
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, x;

	sum1 = 0; /*stores sum of main diagonal*/
	sum2 = 0; /*stores sum of secondary diagonal*/
	/*x is a loop counter*/
	/*position of arrau element, a[i] = row_inde * size + column_indeex*/

	for (x = 0; x < size; x++)
	{
		sum1 = sum1 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		sum2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", sum1, sum2);

}
