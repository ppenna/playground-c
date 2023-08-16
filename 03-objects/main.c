#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 64

struct person
{
	char name[MAX_NAME_LENGTH];
	int age;
};

int main(int argc, char *argv[])
{
	struct person *p = NULL;

	p = malloc(sizeof(struct person));
	if (p == NULL) {
		exit(1);
	}

	strncpy(p->name, "Pedro", MAX_NAME_LENGTH);
	p->age = 31;
	
	printf("Hello, I am %s and I am %d \n", p->name, p->age);

	free(p);

	return (0);
}
