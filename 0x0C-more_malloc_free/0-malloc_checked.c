#include"main.h"
#include <stdlib.h>

/**
 * *malloc_checked - functin to do allocation
 * @b: takes the input of the function
 * Return: m
*/

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);
	/*after declaration*/
	if (m == 0)
		exit(98);
	return (m);
}
