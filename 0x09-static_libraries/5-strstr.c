#include "main.h"
/**
 *  * _strstr - finds first occurence of substring needle
 *   * in the string haystack
 *    * @haystack: provided string
 *     * @needle: substring to find
 *      * Return: pointer to beginning of located substring
 *       *
 *        *
 */
char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		x = 0;
		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
				{
					return (haystack);
					x++;
				}
			} while (haystack[x] == needle[x]);
		}
		haystack++;
	}
	return ('\0');
}
