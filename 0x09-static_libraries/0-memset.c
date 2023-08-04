#include"main.h"

/**
 * _memset - function that replace some
 * characters with symbols
 *
 * @s: takes the inut for the function
 *
 * @b: takes the symbol that will be replaced
 *
 * @n: takes the number of characters that will be replaced
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;
	/*for loop to print*/
	for (m = 0; n > 0; m++, n--)
	{
		s[m] = b;
	}
	return (s);
}
