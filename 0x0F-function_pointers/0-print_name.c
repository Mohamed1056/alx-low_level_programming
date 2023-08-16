#include"function_pointers.h"

/**
 * print_name - function to print names
 * @name: takes the input of the function
 * @f: the function pointer
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
