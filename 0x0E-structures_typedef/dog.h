#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a type called `dog`
 * @name: pointer to the string containing dog's name
 * @age: the age of the dog in float
 * @owner: pointer to the string containing dog owner's name
 *
 * Description: This structure defines a new type
 * called "dog", which contains information
 * about a dog including its name, age, and owner.
 * The name and owner are represented as pointers
 * to strings, while the age is represented as
 * a float value.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
