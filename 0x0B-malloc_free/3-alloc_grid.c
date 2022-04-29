#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **pp;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	pp = malloc(sizeof(int *) * height);

	if (pp == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		pp[i] = malloc(sizeof(int) * width);
		if (pp[i] == NULL)
		{
			free(pp);
			for (j = 0; j <= i; j++)
				free(pp[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			pp[i][j] = 0;
		}
	}

	return (pp);
}
