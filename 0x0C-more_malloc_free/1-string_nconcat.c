#include"main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function to put two strings togther
 * @s1: takes the first string from the user
 * @s2: takes the 2nd input from the user
 * @n: takes the number of letters to be printed from the
 * second string
 * Return: str
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, j, len1, len2;
	/*after decleration*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	str = malloc(len1 + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
