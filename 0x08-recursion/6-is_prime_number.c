#include "main.h"

int is_divisible(int num, int div);
/**
 * is_prime_number - function that returns prime number
 * @n: number to be determined if prime
 * Return: 1 if n is prime else 0
 *
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}


/**
 * is_divisible - checks if number is divisible
 * @num: the number to check
 * @div: the divisor
 *
 * Return: 0 if number is divisable and 1 if not divisable
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
