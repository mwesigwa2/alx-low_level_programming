#include "lists.h"

/**
* add_node - adds a new  node at beginning of a linked list
* @head: pointer to address of new element in list
* @str: string to be duplicated
* Return: address of new element or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *x = malloc(sizeof(list_t));
	int len;
	char *y;

	if (x == NULL)
		return (NULL);

	y = strdup(str);
	if (y == NULL)
	{
		free(x);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	x->str = y;
	x->len = len;
	x->next = *head;
	*head = x;


	return (x);

}
