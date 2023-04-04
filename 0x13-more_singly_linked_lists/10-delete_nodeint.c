#include "lists.h"
/**
* delete_nodeint_at_index - function that deletes node at index
* of a list
* @head: node to be deleted
* @index: position at which to delete a node in the list
* Return: 1 if succeeded, -1 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index != 0)
		{
			previous = current;
			current = current->next;
			index--;

		}
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
