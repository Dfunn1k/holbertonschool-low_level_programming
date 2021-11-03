#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 *new_dog - create a new dog
 *@name : pointer to char
 *@age: pointer to int
 *@owner: pointer to char
 *Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc((sizeof(dog_t)));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);
	dog->age = age;
	strcpy(dog->owner, owner);

	return (dog);
}
