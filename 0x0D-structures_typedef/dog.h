#ifndef _DOG_
#define _DOG_
/**
 *struct dog -  has information over the dog
 *@name: name of dog
 *@owner: owner of dog
 *@age: age of dog
 */
struct dog
{
	char *name, *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
