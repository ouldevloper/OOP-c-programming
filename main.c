#include <stdio.h>
#include "person/person.h"

int main()
{
    personclass *p = constructor();
    p->setId(p, 1);
    p->setName(p, "Abdellah");
    p->setAddress(p, "st.petersburg");
    p->setAge(p, 25);
    p->toString(p);

    personclass *p1 = constructor();
    p1->setId(p1, 2);
    p1->setName(p1, "karim");
    p1->setAddress(p1, "Moscow");
    p1->setAge(p1, 35);
    p1->toString(p1);
    return 0;
}