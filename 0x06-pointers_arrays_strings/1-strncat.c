#include"main.h"

/**
 * _strncat - function that add number of
 * characters to the first word
 *
 * @dest: takes the input for the function
 *
 * @src: takes the other inut for the function
 *
 * @n: takes the value that will be done
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	/*after decleration*/
	i = 0;
	/*doing loops to print what we want*/
	while (dest[i])
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j + i] = src[j];
	}
	dest[j + i] = '\0';
	return (dest);
}
