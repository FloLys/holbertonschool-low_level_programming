#include "dog.h"

/**
* init_dog - initialize variables
* @d: pointer to object
* @name: name of object dog
* @age: age of object dog
* @owner: owner of object dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
