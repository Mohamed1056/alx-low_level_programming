#include"lists.h"

/**
 * list_len - function to find the number
 * of elements
 * @h: takes the input of the function
 * Return: m
*/

size_t list_len(const list_t *h)
{
	size_t m = 0;
	while (h)
	{
		h = h->next;
		m++;
	}
	return (m);
}

