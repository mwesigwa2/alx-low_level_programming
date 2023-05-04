#include "main.h"

/**
* set_bit - function that sets the value of a bit to 1 at given index
* @index: index, starting from 0 of the bit you want to set
* @n: bit whose value we are to set
* Return: 1 if it worked, -1 if error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);

}
