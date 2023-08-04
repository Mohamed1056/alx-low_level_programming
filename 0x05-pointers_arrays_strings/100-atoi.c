#include"main.h"

/**
 * _atoi - function to convert string into intger
 *
 * @s: takes the input of the function
 *
 * Return: nothing
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;
	/* do for loop */
	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0'; *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (number * sign);
}
