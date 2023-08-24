#include"lists.h"

/**
 * _strlen - function to find the length
 * of a string
 * @str: takes the input for the function
 * Return: i
*/
int _strlen(char *str)
{
	int i;

	if (!str)
		return (0);
	while (*str++)
		i++;
	return (i);
}

/**
 * print_list - function to print a linked list
 * @h : takes the input of the function
 * Return: m
*/
size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		m++;
	}
	return (m);
}
