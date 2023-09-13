#ifndef FOG_H
#define DOG_H

/**
 * struct dog - A new type desctibing a dog
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
/**
 * dog_t -typedef for struct dog
 */

typedef struct dog _dog_t;

void ini_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char * wner);
void free_dog(dog_t *d);

#endif
