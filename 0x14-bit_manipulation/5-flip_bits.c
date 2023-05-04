#include "main.h"

/**
* flip_bits - function that returns number of bits needed to get from one
* number to another
* @m: number of times to flip a bit
* @n: bit to flip
* Return: number of bits to flip from n to m
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, bit = 0;

	while (x > 0)
	{
		bit += (x & 1);
		x >>= 1;
	}
	return (bit);

}
