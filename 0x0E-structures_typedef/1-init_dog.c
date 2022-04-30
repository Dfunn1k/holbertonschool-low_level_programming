#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: pointer to name
 * @age:pointer to age
 * @owner: pointer to owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
		
	d->name = name;
	d->age = age;
	d->owner = owner;
}
