#ifndef DOG_H
#define DOG_H
/**
 * dog_t- typedef for stuct dog
 */
typedef struct dog dog_t;
/**
 *struct dog - structure for dog variables
 *@name: name of dog
 *@age: age of the dog
 *@owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
