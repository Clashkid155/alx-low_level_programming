#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - Remove head node
* @head: The node/list
*
* Return: The int
*/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *new;

	if (head == NULL)
		return (0);
	n = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;

	return (n);
}
