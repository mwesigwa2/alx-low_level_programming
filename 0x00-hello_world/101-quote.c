#include <stdio.h>
/**
 * main - output to standard error
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", d);
	return (1);
}
