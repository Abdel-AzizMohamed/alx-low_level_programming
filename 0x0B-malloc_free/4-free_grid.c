#include <stdlib.h>
#include "main.h"


/**
 * free_grid - frees out 2d array
 * @grid: the 2d array
 * @height: height of array
 * Return: Nothing.
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
