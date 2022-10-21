#include "lists.h"
#include <string.h>

/**
* add_node_end - Add new nodes to the end
* @head: The linked list
* @str: The string
*
* Return: Address of the new node or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *second, *last;
	char *str1;

	second = malloc(sizeof(list_t));
	if (second == NULL)
		return (NULL);

	str1 = strdup(str);
	if (str1 == NULL)
	{
		free(second);
		return (NULL);
	}
	second->str = str1;
	second->len = strlen(str1);
	second->next = NULL;

	if (*head == NULL)
		*head = second;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = second;
	}
	return (*head);
}
