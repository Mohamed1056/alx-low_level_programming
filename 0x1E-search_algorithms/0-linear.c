#include "search_algos.h"

/**
 * linear_search - function to search in
 * linear way
 * @array: takes the array that we will
 * search in
 *
 * @size: represent the size of the array
 * @value: the value we are searching for
 * Return: the right index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
