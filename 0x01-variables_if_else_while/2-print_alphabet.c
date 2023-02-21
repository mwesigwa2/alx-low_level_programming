#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 * Description - use of putchar
 */
int main(void)
{
	char al;
	for(al = 'a' ; al <= 'z' ; al++)
		putchar(al);

	return (0);
}
