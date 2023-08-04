#include"main.h"

/**
 * _isdigit - function to check if the charater is
 * a digit or not
 *
 * @c: takes the input for the function
 *
 * Return: 1 if digit 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
