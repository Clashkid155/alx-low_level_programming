#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - 2D array of int
* @width: Colunm
* @height: Row
*
* Return: The array
*/

int **alloc_grid(int width, int height)
{
	int i, k;
	int **array;

	if ((width || height) <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}

	}
	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
			array[i][k] = 0;
	}
	return (array);
}
