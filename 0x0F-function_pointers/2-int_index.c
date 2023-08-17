#include"function_pointers.h"

/**
 * int_index - function to print the index
 * @array: takes the 1st input of the function
 * @size: takes the 2nd input of the function
 * @cmp: takes the function that will work
 * Return: i
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	/*after decleration*/
	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
