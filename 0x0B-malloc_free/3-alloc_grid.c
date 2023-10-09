#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 diamention array
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to an array of int..
 */
int **alloc_grid(int width, int height)

{
	int p, y;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (p = 0; p < height; p++)
	{
		gridout[p] = malloc(width * sizeof(int));
		if (gridout[p] == NULL)
		{
			for (p--; p >= 0; p--)
			free(gridout[p]);
			free(gridout);
			return (NULL);
		}
	}
	for (p = 0; p < height; p++)
		for (y = 0; y < width; y++)
			gridout[p][y] = 0;
	return (gridout);
}
