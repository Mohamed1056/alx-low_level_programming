#include"main.h"

/**
 * _strcpy - function that copies the content of
 * a file to another file
 *
 * @dest: takes its input from src
 *
 * @src: takes the input of the function
 *
 * Return: nothing
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;
	/*do while statment to check the code*/
	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
