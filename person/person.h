#ifndef PERSON_H
#define PERSON_H
typedef struct person
{
    int id;
    char *name;
    char *address;
    int age;

    struct person *(*constructor)();
    void (*setId)(struct person *, int);
    int (*getId)(struct person *);
    void (*setName)(struct person *, char *);
    char *(*getName)(struct person *);
    void (*setAddress)(struct person *, char *);
    char *(*getAddress)(struct person *);
    void (*setAge)(struct person *, int);
    int (*getAge)(struct person *);
    char *(*toString)(struct person *);

} personclass;
personclass *(constructor)();
void(setId)(struct person *, int);
int(getId)(struct person *);
void(setName)(struct person *, char *);
char *(getName)(struct person *);
void(setAddress)(struct person *, char *);
char *(getAddress)(struct person *);
void(setAge)(struct person *, int);
int(getAge)(struct person *);
char *(toString)(struct person *p);
#endif