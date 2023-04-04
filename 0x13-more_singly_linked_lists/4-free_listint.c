#include "lists.h"
/**
* free_listint - function that frees a list
* @head: list to be freed
* Return: 0
*/

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
