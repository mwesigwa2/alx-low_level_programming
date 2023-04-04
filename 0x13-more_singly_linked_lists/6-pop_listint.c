#include "lists.h"

/**
* pop_listint - function that deletes head node of a list
* @head: Pointer to address of head node to be deleted
* Return: o if list is empty else return head node's data
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (*head)
	{
		temp = *head;
		x = (*head)->n;
		*head = (*head)->next;
		free(temp);
		return (x);
	}
	else
		return (0);
}
