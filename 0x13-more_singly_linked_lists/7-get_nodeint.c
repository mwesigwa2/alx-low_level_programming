#include "lists.h"

/**
* get_nodeint_at_index - function that returns nth node of a list
* @head: pointer to head node of list listint_t
* @index: position of the node in the list - index starts at 0
* Return: searched node else return NULL if doesn't exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (x < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		x++;
	}
	return (head);
}
