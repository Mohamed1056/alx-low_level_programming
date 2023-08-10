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
	int i = 0, j = 0, k = 0, l = 0;
	/*after decleration*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n >= k)
		l = i + k;
	else
		l = i + n;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	while (j < l)
	{
		if (j <= i)
		{
			str[j] = s1[j];
		}
		if (j >= i)
		{
			str[j] = s2[k];
			k++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
