#include"main.h"

/**
 * _strncpy - function to copy text
 *
 * @dest: takes the output off the function
 *
 * @src: takes the input of the function
 *
 * @n: takes the input of the function
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/*doing loops to print what we want*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
