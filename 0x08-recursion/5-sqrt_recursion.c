#include"main.h"

/**
 * _sqrt_recursion - function to print the
 * square of a certain number
 *
 * @n: takes the input for the function
 *
 * Return: 0 (success)
*/

int _sqrt_recursion(int n)
{
	int sqr(int n, int j)
	{
		int i;
		/*if statment to run the code*/
		j = n;
		i = n / sqr(n, (j - 1));
		if (i != (n - 1))
		{
			j--;
		}
		else
		{
			return (i);
		}
		return (0);
	}
}
