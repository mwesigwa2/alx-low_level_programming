#include "lists.h"
/**
 * delete_dnodeint_at_index- deletes node at index
 * @head: double pointer to head
 * @index: index to delete
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
	dlistint_t *current;

	if (head == NULL)
		return (-1);
	current = *head;
	while (current)
	{
		if (index == i)
		{
			if (current->prev != NULL)
				current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			if (*head == current)
				*head = current->next;
			free(current);
			return (1);
		}
		i++;
		current = current->next;

	}

	return (-1);
}
