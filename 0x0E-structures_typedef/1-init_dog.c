#include "dog.h"
/**
 * init_dog - Initialises struct dog
 * @d: Pointer to struct dog
 * @name: Pointer the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	strcpy(d->name, name);
	d->owner = malloc(strlen(owner) + 1);
	strcpy(d->owner, owner);
	d->age = age;
}
