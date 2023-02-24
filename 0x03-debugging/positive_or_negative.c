#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - checks for negative and positive number
 *@i: parameter number to enter
 *
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	} else

	{
		printf("%d is zero\n", i);
	}
}
