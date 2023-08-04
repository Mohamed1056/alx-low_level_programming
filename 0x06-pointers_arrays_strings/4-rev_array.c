#include"main.h"

/**
 * reverse_array - function that reverse the array
 *
 * @a: takes the input for the function
 *
 * @n: takes the input for the function
 *
 * Return: 0
*/

void reverse_array(int *a, int n)
{
	int i, j, t;
	/*doing loop to run the code*/
	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
