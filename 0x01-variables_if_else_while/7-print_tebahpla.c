#include <stdio.h>
/**
 * main - SMile in the mirror
 *
 * Return: Always 0 (Success)
 *
 * Description - Program prints lowercase alphabet in reverse using putchar()
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
	      	putchar(x);
	}
	putchar('\n');
	return (0);
}
