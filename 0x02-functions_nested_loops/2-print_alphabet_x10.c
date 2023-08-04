#include"main.h"

/**
 * print_alphabet_x10 - utilizes _putchar function and for loop
 * to print the alphapets 10 times in lower case
*/

void print_alphabet_x10(void)
{
	int ch;
	int i;
	/* a for loop to print the alphapets 10 times*/
	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);

		_putchar('\n');
	}
}


