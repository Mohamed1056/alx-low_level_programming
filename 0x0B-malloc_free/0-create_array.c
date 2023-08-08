#include"main.h"
#include <stdlib.h>

/**
 * *create_array - function to print arraya of
 * chars
 *
 * @size: takkes the input of the function
 *
 * @c: takes the other input of the function
 *
 * Return: n if succeed and 0 if failed
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);
	/* if statment*/
	if (size == 0 || n == 0)
	{
		return (0);
	}
	while (size--)
		n[size] = c;
	return (n);
}
