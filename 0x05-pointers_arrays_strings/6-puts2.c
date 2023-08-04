#include"main.h"

/**
 * puts2 - function that prints some numbers
 *
 * @str: takes the input for the function
 *
 * Return: nothing
*/

void puts2(char *str)
{
	int i;
	/* for loop to print the numbers*/
	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
