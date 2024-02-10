#include "search_algos.h"

/**
 * binary_search - function to find the proper
 * index by bunary search
 *
 * @array: takes the array that we will using
 * @size: takes the size of the array
 * @value: takes the value that we are
 * searching for
 *
 * Return: the proper index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t h = size - 1;

	while (l <= h)
	{
		int mid = l + (h - l) / 2;
		
		printf("Searching in array: ");
		for (size_t i = l; i <= h; i++)
		{
			printf("%d", array[i]);
			if (i < h)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (value);
		}
		if (array[mid] > value)
		{
			h = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return (-1);
}
