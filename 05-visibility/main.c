#include "person.h"

int main(int argc, char *argv[])
{
	struct person *p = person_create("Pedro", 31);

	person_print(p);

	person_print(p);
	
	person_destroy(p);

	return (0);
}
