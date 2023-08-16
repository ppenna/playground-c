#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 64

struct person
{
	char name[MAX_NAME_LENGTH];
	int age;
};

struct person *person_create(const char *name, int age)
{
	struct person *p = NULL;

	p = malloc(sizeof(struct person));
	if (p == NULL) {
		exit(1);
	}

	strncpy(p->name, name, MAX_NAME_LENGTH);
	p->age = age;

	return (p);
}

void person_destroy(struct person *p)
{
	free(p);
}

int main(int argc, char *argv[])
{
	struct person *p = person_create("Pedro", 31);

	printf("Hello, I am %s and I am %d \n", p->name, p->age);

	person_destroy(p);

	return (0);
}
