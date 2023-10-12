#include "lists.h"

/**
 * dlistint_len - function to find the length
 * @h: takes the input for the function
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
