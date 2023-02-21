#include <stdio.h>
/**
 * main - print single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 *
 * Description - Program that prints single digit
 * numbers of base 10 starting from 0, followed
 * by a new line. Using putchar
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');
	putchar('\n');
	return (0);
}
