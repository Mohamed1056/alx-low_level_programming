#include"main.h"
#include <stdlib.h>

/**
 * *array_range - function to print array
 * @min: takes the 1st input for the function
 * @max: takes the 2nd input for the function
 * Return: ptr
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;
	/*after decleration*/
	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == 0)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}

