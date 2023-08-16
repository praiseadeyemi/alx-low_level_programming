#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creats a new dog
 * @name: address of a new dog name
 * @age: address of anew dog age
 * @owner: new dog owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	unsigned int name_len, owner_len, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	for (name_len = 0; name[name_len]; name_len++)
		;
	for (owner_len = 0; owner[owner_len]; owner_len++)
		;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(1 * name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(1 * owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		new_dog->owner[i] = owner[i];
	new_dog->age = age;

	return (new_dog);
}
