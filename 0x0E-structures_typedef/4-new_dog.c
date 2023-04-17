#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog -  creates a new dog.
 * @name: dog name
 * @age: dogage
 * @owner: dog owner
 * Return: pointer to the new dog if no error otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);
	newDog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (newDog->name == NULL)
	{
		free(owner);
		free(newDog);
		return (NULL);
	}
	newDog->name = strcpy(newDog->name, name);
	newDog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (owner == NULL)
	{
		free(name);
		free(newDog);
		return (NULL);
	}
	newDog->owner = strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
}
