#include"function_pointers.h"

/**
 * array_iterator - function to print what we want
 * @array: takes the input of the function
 * @size: takes the 2nd input
 * @action: pointer to function
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *i = array + size - 1;
	/*after decleration*/
	if (array && size && action)
	{
		while (array <= i)
		{
			action(*array++);
		}
	}
}
