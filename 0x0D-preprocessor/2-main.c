#include <stdio.h>
/**
 * main - program that prints the name of the file
 * it was compiled from, followed by newline
 * Return: file name in __FILE__
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
