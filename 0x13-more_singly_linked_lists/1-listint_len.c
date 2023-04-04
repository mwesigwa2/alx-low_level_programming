#include "lists.h"

/**
* listint_len - function that returns number of elements
* @h: list whose number of elements are to be returned
* Return: number of elements in list
*/

size_t listint_len(const listint_t *h)
{
	int node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
