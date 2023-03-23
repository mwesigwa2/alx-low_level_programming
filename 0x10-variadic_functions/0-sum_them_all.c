#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns sum of all its parameters
 * @n: number of parameters whose sum is to be returned
 *
 * Return: 0 if n == 0 otherwise return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n); /*save arguments in list. */

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int); /*get next argument value*/
	}
	va_end(ap); /*stop traversal*/
	return (sum);

}
