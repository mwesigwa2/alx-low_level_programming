#include "lists.h"

/**
* reverse_listint - function that reverses a listint_t linked list
* @head: pointer to the head node of list listint_t
* Return: pointer to first node of reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *ptr2;

	if (head == NULL || *head == NULL)
		return (NULL);

	ptr = NULL;

	while ((*head)->next)
	{
		ptr2 = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = ptr2;
	}
	(*head)->next = ptr;
	return (*head);
}
