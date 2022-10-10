#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - data type
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: This structure contains three members
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - new name
 * struct dog - old name for data type
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: this structure contains three members and new name for data type*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

#endif
