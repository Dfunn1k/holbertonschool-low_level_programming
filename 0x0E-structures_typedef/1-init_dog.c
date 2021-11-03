#include "dog.h"
/**
 *init_dog - Init struct dog
 *@d: pointer to structure
 *@name: pointer to char
 *@age: pointer to float
 *@owner: pointer to char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
