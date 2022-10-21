#include "lists.h"
#include <string.h>

/**
* add_node - Add new nodes to beginning
* @head: The linked list
* @str: The string
*
* Return: Address of the new node or NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *second;
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
	second->next = *head;
	*head = second;

	return (second);
}
