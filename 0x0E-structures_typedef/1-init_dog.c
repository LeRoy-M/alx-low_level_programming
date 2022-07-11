#include "dog.h"

/**
 * init_dog - Initializes a variable
 *
 * @d: Pointer to 'my_dog'
 * @name: Elment of 'dog' user defined data type
 * @age: Elment of 'dog' user defined data type
 * @owner: Elment of 'dog' user defined data type
 * @dog: User defined type
 *
 * Return: Always
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	my_dog d = {.name = name, .age = age, .owner = owner};
}
