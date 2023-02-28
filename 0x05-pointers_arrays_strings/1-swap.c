#include "main.h"
#include <stdio.h>
/**
 * swap_int - function that swaps values of two integers
 * @a: integer pointer 1
 * @b: integer pointer 2
 *
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
