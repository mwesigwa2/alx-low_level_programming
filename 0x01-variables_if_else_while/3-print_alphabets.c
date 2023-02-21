#include <stdio.h>
/**
 * main - Print alphABET
 *
 * Return: Always 0 (Success)
 *
 * Description - Program prints alphabet in lowercase and then in Uppercase
 */
int main(void)
{
	char ax;

	for (ax = 'a'; ax <= 'z'; ax++)

		putchar(ax);

	for (ax = 'A'; ax <= 'Z'; ax++)
		putchar(ax);
	putchar('\n');
	return (0);
}
