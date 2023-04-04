#include "lists.h"

/**
* sum_listint - function that sums all data(n) of a listint_t linked list
* @head: pointer to head of listint_t
* Return: sum of all data (n)
* if list is empty return 0
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
