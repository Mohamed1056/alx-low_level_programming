#include"main.h"

/**
 * print_chessboard - function to print chessboard
 *
 * @a: tajes the input of the function
*/

void print_chessboard(char (*a)[8])
{
	int m, x;
	/*doing loops*/
	for (m = 0; m < 8; m++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[m][x]);
		}
		_putchar('\n');
	}
}
