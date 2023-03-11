#include "main.h"
/**
 *  * _atoi - converts string to integer
 *   * @s: pointer to string to be converted
 *    * Return: int converted from string
 *     *
 */
int _atoi(char *s)
{
	int a, b, c, d, x, y;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	x = 0;
	y = 0;
	while (s[d] != '\0')
		d++;
	while (a < d && x == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			y = s[a] - '0';
			if (b % 2)
				y = -y;
			c = c * 10 + y;
			x = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			x = 0;
		}
		a++;
	}
	if (x == 0)
		return (0);
	return (c);
}
