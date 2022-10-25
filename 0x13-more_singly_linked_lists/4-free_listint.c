#include "lists.h"
#include <stdlib.h>

/**
* free_listint - Free the node
* @head: The node/list
*/

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
