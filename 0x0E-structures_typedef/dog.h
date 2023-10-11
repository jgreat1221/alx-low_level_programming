#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @age: age of dog
 * @name: name of dog
 * @owner: name of owner
 */
struct dog

{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif