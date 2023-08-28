#include"lists.h"

/**
 * print_listint - function to print all the list
 * @h: is the input for the function
 * Return: nothing
*/

size_t print_listint(const listint_t *h)
{
	int i = 0;
	listint_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		i++;
	}
	printf("-> %d elements\n", i);
}
