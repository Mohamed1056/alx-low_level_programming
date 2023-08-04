#include"main.h"

/**
 * _strcat - function that append new word
 * to the last word
 *
 * @dest: takes the input of the function
 *
 * @src: takes the other input of the function
 *
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;
	/*making a value for the first variable*/
	i = 0;
	/*doing loops to print what we want*/
	while (dest[i])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];
	return (dest);
}
