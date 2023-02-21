#include <stdio.h>
/**
 * main - program to print single digit numbers
 *
 * Return: Always 0 (Success)
 *
 * Descrition - print single digit numbers
 */
int main(void)
{
	int x;

	x = 0; 

	while (x < 10 )
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}			

