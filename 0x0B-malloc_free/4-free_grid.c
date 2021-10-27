#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Function to free memory used
 * @grid: Parameter
 * @height: Return value
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
