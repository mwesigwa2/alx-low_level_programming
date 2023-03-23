#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by new line
 * @separator: string to be printed  between numbers
 * @n: number to be printed
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; /*Declaring pointer to argument list*/
	unsigned int x;

	va_start(args, n); /*initialize pointer ot the argument list*/

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(args, unsigned int)); /*print next variable pointed to*/
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
