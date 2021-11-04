#include "person.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person *constructor()
{
    personclass *this = (personclass *)malloc(sizeof(personclass));
    if (this == (void *)0)
    {
        perror("Memeory not enought...");
        exit(-1);
    }
    this->setId = &setId;
    this->getId = &getId;
    this->setName = &setName;
    this->getName = &getName;
    this->setAddress = &setAddress;
    this->getAddress = &getAddress;
    this->setAge = &setAge;
    this->getAge = &getAge;
    this->toString = &toString;
    return this;
}
void setId(personclass *this, int id)
{
    this->id = id;
}
int getId(personclass *this)
{
    return this->id;
}
void setName(personclass *this, char *name)
{
    this->name = (char *)malloc(55);
    strncpy(this->name, name, 55);
}
char *getName(personclass *this)
{
    return this->name;
}
void setAddress(personclass *this, char *address)
{
    this->address = (char *)malloc(55);
    strncpy(this->address, address, 55);
}
char *getAddress(personclass *this)
{
    return this->address;
}
void setAge(personclass *this, int age)
{
    this->age = age;
}
int getAge(personclass *this)
{
    return this->age;
}
char *toString(personclass *p)
{
    printf("++++++++[Info]+++++++++\n\tID: %d\n\tName: %s\n\tAddress: %s\n\tAge: %d\n++++++++++++++++++++++++++++++++++++\n",
           p->id,
           p->name,
           p->address,
           p->age);
}
