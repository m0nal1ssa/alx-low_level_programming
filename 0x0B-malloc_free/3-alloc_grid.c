#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - creates a two dimensional array of ints; array init with 0's
 * @width: with of array
 * @height: height of array
 * Return: pointer to the array; NULL on failure or either
 * width or height os neg or 0
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int b, c;

	if (height < 1 || width < 1)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (b = 0; b < height; b++)
	{
		arr[b] = (int *) malloc(sizeof(int) * width);
		if (arr[b] == NULL)
		{
			for (c = 0; c < i; c++)
				free(arr[c]);
			free(arr);

			return (NULL);
		}
		for (c = 0; c < width; c++)
			arr[b][c] = 0;
	}

	return (arr);
}
