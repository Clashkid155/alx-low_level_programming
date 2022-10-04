#include <stdlib.h>
#include <stdio.h>

/**
* create_array - Arrays of a char using malloc
* @size: Size of Array
* @c: Char to fill array with
*
* Return: The array of Null
*/

char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (; (int)size >= 0; size--)
		array[size] = c;
	return (array);
}
