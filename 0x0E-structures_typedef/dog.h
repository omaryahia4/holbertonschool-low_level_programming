#ifndef DOG_H
#define DOG_H
/**
* struct dog - dog's DATA
* @name: dog's name
* @age:  dog's age
* @owner: dog's owner
*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
dog_t - typdefe for structur dogg
*/
typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

