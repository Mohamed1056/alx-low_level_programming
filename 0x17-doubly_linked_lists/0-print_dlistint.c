#include "lists.h"

/**
 * print_dlistint - function to print the
 * elements in a list
 * @h: the head of the list
 * Return: number of element
*/

size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;
	/*after decleration*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
