#ifndef _DOG_H_
#define _DOG_H_
/**
 *struct dog - struct of my dog
 *@name: First member
 *@age: Second member
 *@owner: thir member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
