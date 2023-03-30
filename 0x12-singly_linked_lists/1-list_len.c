#include "lists.h"

/**
* list_len - function that returns the number of elements
* in a linked list
* @h: linked list whose number of elements is to be returned
* Return: No of elements in  list
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;

	}
	return (count);
}
