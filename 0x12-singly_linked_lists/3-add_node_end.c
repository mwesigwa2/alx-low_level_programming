#include "lists.h"

/**
* add_node_end - function that adds a new node at end of list
* @head: pointer to head of the linked list
* @str: string to be added at end of list
* Return: address of new element, or NULL if failed
* str to be duplicated using strdup
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	int len;
	char *dup_str;

	/*Allocate memory for new node*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/*Duplicate string*/
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/*get length of string*/
	for (len = 0; str[len];)
		len++;
	
	/* Update the new node to point to NULL*/
 	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = NULL;	

	/* If the list is empty, make the new node the head*/
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		 /* Otherwise, traverse the list to find the last node*/
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}
	return (*head);

}
