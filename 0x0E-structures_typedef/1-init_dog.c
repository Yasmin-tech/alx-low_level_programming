#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function to initialize a variable of dog struct
 * @d: a pointer to the dog variable
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	(*d).age = age;
	(*d).owner = owner;

}
