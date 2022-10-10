#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - data type
 * dog_t - alias for data type
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: This structure contains three members
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
