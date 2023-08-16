#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 64

struct person
{
	char name[MAX_NAME_LENGTH];
	int age;
};

int main(int argc, char *argv[])
{
	struct person p;

	strncpy(p.name, "Pedro", MAX_NAME_LENGTH);
	p.age = 31;
	
	printf("Hello, I am %s and I am %d \n", p.name, p.age);

	return (0);
}
