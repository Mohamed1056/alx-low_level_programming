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
	int i;
	/*after decleration*/
	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
