#ifndef DOG
#define DOG

#include <stdio.h>

/**
 * struct dog - dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: dog structure
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG*/
