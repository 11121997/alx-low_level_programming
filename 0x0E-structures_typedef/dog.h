#ifndef DOG_H
#define DOG_H

/**
*struct dog - dog structure
*@name: dog's name
*@age: dog's age
*@owner: dog's owner
*Description: write structure contain all dog's information
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int main(void);
dog_t *new_dog(char *name, float age, char *owner);

#endif
