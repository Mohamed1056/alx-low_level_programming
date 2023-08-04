#include"main.h"

/**
 * _isalpha - cghecks if the character is a letter
 *
 * @c: takes input from function
 *
 * Return: 1 if true else 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
