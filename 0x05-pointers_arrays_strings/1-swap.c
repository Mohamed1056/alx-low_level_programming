#include <stdio.h>

/**
 * swap_int - function that swap the value
 * of the variabels
 *
 * @a: takes the input for the function
 * @b: takes the input for the function
*/

void swap_int(int *a, int *b)
{
	int tmp;
	/*swaping the values*/
	tmp = *a;
	*a = *b;
	*b = tmp;
}
