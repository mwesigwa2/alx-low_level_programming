#include "lists.h"

/**
* add_nodeint - function that adds new node at beginning of list
* @head: node at beginning of list
* @n: integer in new node to be added
* Return: address of new element or NULL if failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));


	if (head == NULL)
		return (NULL);

	if (ptr)
	{
		ptr->n = n;
		ptr->next = *head;
		*head = ptr;
	}
	else
		return (NULL);
	return (ptr);
}
