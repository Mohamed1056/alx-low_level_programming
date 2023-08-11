#include"main.h"
#include <stdlib.h>

/**
 * *_memsot - function to print what we want
 * @s: takes the 1st input for the function
 * @b: takes the 2nd input for the function
 * @n: takes the 3rd input for the function
 * Return: ptr
*/

char *_memsot(char *s, char b, unsigned int n)
{
	char *ptr;
	/*after decleration*/
	ptr = s;
	while (n--)
		*s++ = b;
	return (ptr);
}
/**
 * *_calloc -function to do what we want
 * @nmemb: takes the input for the function
 * @size: takes the 2nd input for the function
 * Return: m
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	/*after decleration*/
	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);
	if (m == 0)
		return (NULL);
	_memsot(m, 0, sizeof(int) * nmemb);
	return (m);
}

