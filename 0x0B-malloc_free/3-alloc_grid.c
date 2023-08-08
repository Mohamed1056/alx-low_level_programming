#include"main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function to print grid
 *
 * @width: takes the 1st input for the function
 *
 * @height: takes 2nd input for the function
 *
 * Return: ptr
*/

int **alloc_grid(int width, int height)
{
	int i, j, **ptr;
	/*after decleration*/
	ptr = malloc(sizeof(int) * height);
	if (width <= 0 || height <= 0 || ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = malloc(sizeof(int) * width);
			if (ptr[i] == 0)
			{
				while (i--)
					free(ptr[i]);
				free(ptr);
				return (NULL);
			}
			for (j = 0; j <= width; j++)
			{
				ptr[i][j] = 0;
			}
		}
	}
	return (ptr);
}
