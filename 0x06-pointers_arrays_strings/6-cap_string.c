#include"main.h"

/**
 * cap_string - function that prints every
 * letter capital
 *
 * @str: takes the input for the function
 *
 * Description: making letters uppercase
 *
 * Return: str
*/

char *cap_string(char *str)
{
	int i;
	/*for loop to run the code*/
	for (i = 0; str[i] < '\0'; i++)
	{
		if (str[i] == ' ')
		{
			str[i + 1] = str[i + 1] - 32;
		}
		else if (i == 0)
		{
			str[0] = str[0] - 32;
		}
	}
	return (str);
}
