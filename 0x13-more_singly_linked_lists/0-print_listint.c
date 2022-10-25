#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_listint - Print all elements in node
* @h: list struct
*
* Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t id = 0;

	for (; h; h = h->next, id++)
	{
		printf("%d\n", h->n);
	}
	return (id);
}
