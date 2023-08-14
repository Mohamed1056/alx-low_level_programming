#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function to print what we want
 * @d: takes the input
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "nil");
		printf("Age: %f\n", d->age ? d->age : 0);
		printf("Owner: %s\n", d->owner ? d->owner : "nil");
	}
}
