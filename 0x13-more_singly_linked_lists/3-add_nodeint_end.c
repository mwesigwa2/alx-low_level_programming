#include "lists.h"

/**
* add_nodeint_end - function that adds new node at end of list
* @head: address of new element to be added to the list
* @n: integer element to be added to head
* Return: address of new element or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *current;

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = ptr;
	}
	return (*head);
}
