#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a type called `dog`
 * @name: pointer to the string containing dog's name
 * @age: the age of the dog in float
 * @owner: pointer to the string containing dog owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
