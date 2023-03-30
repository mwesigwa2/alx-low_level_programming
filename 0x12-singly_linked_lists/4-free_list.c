#include "lists.h"
/**
* free_list - function that frees a list
* @head: list to be freed
* Return: Nothing
*/
void free_list(list_t *head)
{
	list_t *x;

	while (head)
	{
		x = head->next;
		free(head->str);
		free(head);
		head = x;
	}
}
