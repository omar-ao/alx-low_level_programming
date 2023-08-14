#include "dog.h"
/**
 * free_dog - Free dogs
 * @d: Pointer to type dog
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
