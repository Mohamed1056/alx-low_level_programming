#include "lists.h"
#include <stdio.h>

/**
 * print_list - function to find the length
 * of a string
 * @h: takes the input for the function
 * Return: k
*/


size_t print_list(const list_t *h)
{
	size_t k = 0;
	/*after decleration*/
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		k++;
	}

	return (k);
}

