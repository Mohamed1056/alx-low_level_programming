#include"lists.h"

/**
 * listint_len - print the elements of list
 * @h: takes the input of the function
 * Return: num
 *
*/

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
