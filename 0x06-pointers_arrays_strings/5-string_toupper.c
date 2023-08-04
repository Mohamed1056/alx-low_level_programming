#include"main.h"

/**
 * string_toupper - function that find uppercase
 *
 * @x: takes the input of the function
 *
 * Description: doing this job
 *
 * Return: x
*/

char *string_toupper(char *x)
{
	int i;
	/*doing loop to run the function*/
	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 97 && x[i] <= 122)
		{
			x[i] = x[i] - 32;
		}
	}
	return (x);
}
