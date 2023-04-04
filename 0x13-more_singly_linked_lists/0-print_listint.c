#include "lists.h"

/**
* print_listint - Function that prints all the elements of a listint_t list
* @h: The list whose elements are to be printed
* Return: the number of nodes in list
*
*/

size_t print_listint(const listint_t *h)
{
	int node = 0;

	if (h == NULL)
		return (1);

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);

}
