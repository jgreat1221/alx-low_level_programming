#include "main.h"
#include <stdlib.h>
/**
 * free-grid - free a 2 diamentional grid
 * @grid: multidiamentional array of integers
 * @height: height of the grid
 *
 * Return: no return
 */
void free_grid(int **grid, int height)

{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
