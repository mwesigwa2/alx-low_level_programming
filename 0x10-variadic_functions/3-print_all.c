#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: list of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int x = 0;
	char *p, *str = "";

	va_start(args, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", str, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", str, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", str, va_arg(args, double));
					break;
				case 's':
					p = va_arg(args, char*);
					if (!p)
						p = "(nil)";
					printf("%s%s", str, p);
					break;
				default:
					x++;
					continue;
			}
			str = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(args);
}

