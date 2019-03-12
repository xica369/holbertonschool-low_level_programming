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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strdup(char *str);
void free_dog(dog_t *d);
#endif
