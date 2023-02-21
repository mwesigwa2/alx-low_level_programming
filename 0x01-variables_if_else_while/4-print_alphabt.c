#include <stdio.h>
/**
 * main - When I was having that alphabet soup, I never thought that it would pay off
 *
 * Return: Always 0 (Success)
 *
 * Description - program prints an alphabet with exception of letters q and e
 */
int main(void)
{
	char tt;
	tt = 'a';

	while (tt <= 'z')
	{
		if (tt != 'q' && tt != 'e')
		{
		putchar(tt);
		}
		tt++;

	}
	putchar('\n');
	return (0);

}
