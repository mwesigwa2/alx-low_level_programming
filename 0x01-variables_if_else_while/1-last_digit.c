#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Print last digit of a random number stored in a variable
 *
 * Return: Always 0 (Success)
 * Description - Program that assigns a random number to a variable
 * and prints out the last digit of that number stored in a variable n
 */
int main(void)
{
		int n, last_digit;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				last_digit = n % 10;

				if (last_digit > 5)
					printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
				else if (last_digit == 0)
				{
				       	printf("Last digit of %d is %d and is 0\n", n, last_digit);
				}
				else if (last_digit < 6 && last_digit != 0)
				{
					char s[] = "and is less than 6 and not 0\n";
					 printf("Last digit of %d is %d %s", n, last_digit, s);
				}

					return (0);
}
