#include <stdio.h>
#define UNUSED(expr) do { (void)(expr); } while (0)
/**
 * main - prints number of arguments passed to it
 * @argc: number of srguments
 * @argv: array of string arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (x = 0; argv[x]; x++);

		printf("%d\n", x - 1);
	}

	return (0);
}
