#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b:integer variable to be allocated in memory
 * Return: pointer to allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{

	void *x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
