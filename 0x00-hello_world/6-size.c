#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A c program that prints the size using sizeof function
 *
 * Return: Alwayse 0 (success)
*/

int main(void)
{
	int int_type;
	char char_type;
	long int long_int_type;
	long long int long_long_int;
	float float_type;

	printf("size of a char: %d byte(s)\n", sizeof(char_type));
	printf("size of an int: %d byte(s)\n", sizeof(int_type));
	printf("size of a long int: %d byte(s)\n", sizeof(long_int_type));
	printf("size of a long long int: %d byte(s)\n", sizeof(long_long_int));
	printf("size of a float: %d byte(s)\n", sizeof(float_type));
	return (0);
}


