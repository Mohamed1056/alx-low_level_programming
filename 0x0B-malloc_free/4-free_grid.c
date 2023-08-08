#include"main.h"
#include <stdlib.h>

/**
 * free_grid - function that free grid
 *
 * @grid: takes the first input for the function
 *
 * @height: takes the 2nd input for the function
 *
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i;
	/*after decleration*/
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
