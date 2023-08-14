#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: structure for dog
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
