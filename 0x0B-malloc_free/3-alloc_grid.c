#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2D array if integer
 * @width: The width of the array matrix
 * @height: Height of the array matrix
 *
 * Return: on success, return pointer to the Matrix
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
			{
				free(arr[j]);
				return (NULL);
			}
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
