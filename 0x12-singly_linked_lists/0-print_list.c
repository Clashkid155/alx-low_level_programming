#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_list - Print content of the node and it's number
* @h: The node of type list_h
*
* Return: The number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	for (; h; n++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (n);
}
