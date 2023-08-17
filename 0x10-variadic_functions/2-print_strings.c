#include"variadic_functions.h"

/**
 * print_strings - function to print string
 * @separator: takes the separator
 * @n: takes the num of arguments
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *s;
	va_list ptr;
	/*after declaeratin*/
	va_start(ptr, n);
	while (i--)
	{
		s = va_arg(ptr, char*);
		printf("%s", s ? s : "(nil)");
		if (i != 0)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
