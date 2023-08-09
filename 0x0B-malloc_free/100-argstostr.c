#include"main.h"
#include <stdlib.h>

/**
 * _strlen - function to do whaat we want
 *
 * @s: takes the input of the function
 *
 * Return: size
*/

int _strlen(char *s)
{
	int size;
	/*after decleration*/
	for (size = 0; s[size] != '\0'; size++)
	;
	return (size);
}


/**
 * *argstostr - function to print what we want
 *
 * @ac: takes 1st input of the function
 *
 * @av: takes 2nd of the function
 *
 * Return: s
*/

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, nc = 0, cmpt = 0;
	char *s;
	/*after decleration*/
	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac ; i++, nc++)
		nc += _strlen(av[i]);
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			s[cmpt] = av[i][j];
		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
