#include "lists.h"
#include <stdio.h>

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
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * print_list - function to print a linked list
 * @h : takes the input of the function
 * Return: k
*/

size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", _strlen(h->str), h->str);
		h = h->next;
		k++;
	}

	return (k);
}

