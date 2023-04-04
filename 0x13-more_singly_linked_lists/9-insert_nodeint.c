#include "lists.h"

/**
* insert_nodeint_at_index - function that inserts a new node at any position
* @head: pointer to the address of the head of the list
* @idx: index of the list where new node is to be added
* @n: integer to be contained in the new node
* Return: Address of new node or NULL if failed
* if adding new node at index idx is impossible, dont add it. Return NULL.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head, *ptr2;
	unsigned int x = 0;

	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);

	ptr2->n = n;

	if (idx == 0)
	{
		ptr2->next = ptr;
		*head = ptr2;
		return (ptr2);
	}

	while (x < idx - 1)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);

		ptr = ptr->next;
		x++;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;

	return (ptr2);
}
