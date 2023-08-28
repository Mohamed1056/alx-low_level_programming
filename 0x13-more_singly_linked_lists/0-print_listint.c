#include"lists.h"

/**
 * print_listint - function to print all the list
 * @h: is the input for the function
 * Return: i
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
