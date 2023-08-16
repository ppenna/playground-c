#ifndef PERSON_H_
#define PERSON_H_

struct person;

extern struct person *person_create(const char *name, int age);
extern void person_destroy(struct person *p);
extern void person_print(struct person *p);

#endif
