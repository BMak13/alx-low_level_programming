#include "main.h"
/**
 *free_grid- remove momory allocation previously made
 *@grid: grid memory block to be cleared
 *@height: height of matrix
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
	int o;

	for (o = 0; o < height; o++)
		free(grid[o]);
	free(grid);
}
