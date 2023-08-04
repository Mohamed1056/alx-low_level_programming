#include"main.h"

/**
 * factorial - function to print factorial
 *
 * @n: takes the input of the function
 *
 * Return: factorial
*/

int factorial(int n)
{
	int i;
	/*if statment*/
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		i = n * factorial(n - 1);
		return (i);
	}
	return (0);
}
