#include "lists.h"
#include <stdio.h>

/**
* list_len - Return number of element in linked list
* @h: Link list
*
* Return: Number of element in linked list
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	for (; h; n++)
		h = h->next;
	return (n);
}
