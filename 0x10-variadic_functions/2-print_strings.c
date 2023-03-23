#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - function that prints strings followed by new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * if one of the strings is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	char *c;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		c = va_arg(args, char *);
		if (c == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", c);
		}
		if (x < n - 1 && separator != NULL)
		{

			printf("%s", separator);
		}
	}
	printf("\n");
}
