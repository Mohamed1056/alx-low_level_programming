#include"dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free dog
 * @d: takes the input of the function
 * Return: void
*/

void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
