#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: first string to be compared
 * @s2: second string to compare with first string
 * Return: less, equal or greater
 *
 */
int _strcmp(char *s1, char *s2)
{
	int len;

	len = 0;
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			len = 1;
			break;
		}
		s1++;
		s2++;
	}

	if (len == 0 && s1[len] == '\0' && s2[len] == '\0')
		return (0);

	if (*s1 < *s2)
	{
		return (-len);
	}
	else
	{
		return (len);
	}

}
