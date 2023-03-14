#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return:0 else return 1 if error
 *
 */
int main(int argc, char *argv[])
{
	int mult, i;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		mult = 1;
		for (i = 1; i < 3; i++)
		{
			mult *= atoi(argv[i]); 
		}
		printf("%d\n", mult);
		
	}
	return (0);
}
