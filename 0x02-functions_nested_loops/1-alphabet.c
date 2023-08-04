#include"main.h"

/**
 *  print_alphabet - utilize on the _putchar function to print the letters
 *                         from a to z in lower case
*/

void print_alphabet(void)
{
	int ch;
	/*printing the alphapets from a to z in lower case*/
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
