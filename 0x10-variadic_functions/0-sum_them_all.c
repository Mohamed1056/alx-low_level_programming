#include"variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function to sum nums
 * @n: takes the num of arguments
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(ptr, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ptr, int);
		}
		va_end(ptr);
		return (sum);
	}
}
