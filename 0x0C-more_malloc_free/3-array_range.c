#include "main.h"
#include <stdlib.h>

/**
* array_range - Array of intergers
* @min: Mini
* @max: Max
*
* Return: Array of int
*/

int *array_range(int min, int max)
{
	int i, c, *arr;

	if (min > max)
		return (NULL);
	i = max - min + 1;
	arr = malloc(sizeof(int) * i);

	if (arr == NULL)
		return (NULL);
	for (c = 0; c < i; c++)
		arr[c] = min++;
	return (arr);
}
