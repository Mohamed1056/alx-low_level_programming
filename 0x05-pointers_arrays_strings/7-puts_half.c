#include"main.h"

/**
 * puts_half - function that prints half of the string
 *
 * @str: takes the input for the function
*/

void puts_half(char *str)
{
	int i;
	/*for loop for printing*/
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
