#include"main.h"

/**
 * _islower - is a function to check
 * if the letter is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' lowercase
 *       otherwise alwayse 0 (success)
*/

int _islower(int c)
{
	/*checking if the number is lower case or upper case*/
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
