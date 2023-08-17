#include"variadic_functions.h"

/**
 * print_numbers - function to print nums
 * @separator: takes the input of the function
 * @n: takes the num of argument
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	int s;
	va_list ptr;

	va_start(ptr, n);
	while (i--)
	{
		s = va_arg(ptr, int);
		printf("%d", s);
		if (i != 0)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
