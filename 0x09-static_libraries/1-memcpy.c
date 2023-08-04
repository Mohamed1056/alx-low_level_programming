#include"main.h"

/**
 * _memcpy - functioon to return dest
 *
 * @dest: takes the input for the function
 *
 * @src: takes the input for the function
 *
 * @n: takes the input for the function
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;
	/*for loop to print this code*/
	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
