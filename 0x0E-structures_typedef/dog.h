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
#endif
