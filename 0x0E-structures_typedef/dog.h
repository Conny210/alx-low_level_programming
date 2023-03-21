#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - created new type called struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dogs owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog;

/** prototype of function that initializes a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
