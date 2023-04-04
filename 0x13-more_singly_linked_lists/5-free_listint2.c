#include "lists.h"

/**
* free_listint2 - function that frees a list and sets head to NULL
* @head: list to be freed
* Return: 0
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;

	}
	head = NULL;

}
