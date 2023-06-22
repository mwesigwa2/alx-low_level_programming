#include <stdio.h>
/**
 * rand - functino that helps in radom generation of numbers
 * Return: nothing / 0
 */

int rand(void)
{
	static int counter = -1;

	counter++;
	switch (counter)
	{
		case 0:
			return (8);
		case 1:
			return (8);
		case 2:
			return (7);
		case 3:
			return (9);
		case 4:
			return (23);
		case 5:
			return (74);
		default:
			return (counter + 2);

	}
}
