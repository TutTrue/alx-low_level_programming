#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog -  creates a new dog.
 * @name: dog name
 * @age: dogage
 * @owner: dog owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(owner);
		free(newDog);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(name);
		free(newDog);
		return (NULL);
	}
	newDog->name = name;
	newDog->owner = owner;
	newDog->age = age;
	return (newDog);
}
