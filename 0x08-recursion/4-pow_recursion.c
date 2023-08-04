#include"main.h"

/**
 * _pow_recursion - function to calculate the power
 * of a given number
 *
 * @x: takes the input of the function
 *
 * @y: takes the input of the function
 *
 * Return: 0 (success)
*/

int _pow_recursion(int x, int y)
{
	int i;
	/*if statment to check the numbers*/
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		i = x * _pow_recursion(x, y - 1);
		return (i);
	}
	return (0);
}
