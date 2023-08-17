#include"variadic_functions.h"

/**
 * sum_them_all - function to sum nums
 * @n: takes the num of arguments
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list ptr;

	i = n;
	if (!n)
	{
		return (0);
	}
	va_start(ptr, n);
	while (i--)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
