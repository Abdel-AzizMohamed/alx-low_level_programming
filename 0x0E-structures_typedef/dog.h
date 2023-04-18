#ifndef FILE_MAIN
#define FILE_MAIN

/**
 * struct dog - a dog struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
*/
typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
