#include "main.h"

/**
* get_bit - function that returns the value of a bit at given index
* @index: the index, starting from 0 of the bit you want to get
* @n: bit whose value is to be determined
* Return: value of bit at index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
