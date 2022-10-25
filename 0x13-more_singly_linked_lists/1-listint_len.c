#include "lists.h"
#include <stdlib.h>

/**
* listint_len - Length of list
* @h: List struct
*
* Return: node size
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (; h; h = h->next, i++)
		;
	return (i);
}
