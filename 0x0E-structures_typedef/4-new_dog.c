#include "dog.h"

/**
 * new_dog - Creates a variable of type struct dog.
 * @d: The struct dog object to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: A variable of type dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
