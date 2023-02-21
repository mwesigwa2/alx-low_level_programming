#include <unistd.h>
/**
 * main - Program to print _putchar followed by newline
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	return (write(1,"_putchar\n", 9));
}
