#include "main.h"
/**
 * print_alphabet_x10 - use _putchar to print 10 times the alphabet
 *
 * Return: Always 0
 *
 */
void print_alphabet_x10(void)
{
	char i, k;

	for (k = 0; k < 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		}
			_putchar('\n');
	}
}
