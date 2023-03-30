#include "lists.h"

/**
* print_list - function that prints all elements of a list
* @h: list whose elements are to be printed
* Return: number of nodes in list
* if str is NULL, print [0] (nil)
*/

size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		printf("[%d] (%s)\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
