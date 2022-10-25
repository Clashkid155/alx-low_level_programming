#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint_end - Add to the end of node
* @head: Node/list
* @n: Int
*
* Return: New node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *old;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		old = *head;
		while (old->next)
			old = old->next;
		old->next = new;
	}
	return (*head);
}
