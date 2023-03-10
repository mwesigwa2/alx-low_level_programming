#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: number whose factorial is to be returned
 * Return: -1 if n < 0
 *
 */

int factorial(int n)
{
	int x = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	x = x * factorial(n - 1);

	return (x);

}
