#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - Add node to beginning of list
* @head: List
* @n: Int to add
*
* Return: listint_t
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
