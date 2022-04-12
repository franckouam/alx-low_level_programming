#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog representation structure.
 * @name: The name of the dog.
 * @age: Its age
 * @owner: The name of the owner of the dog.
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
