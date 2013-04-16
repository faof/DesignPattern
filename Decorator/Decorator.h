#ifndef DECORATOR_H
#define DECORATOR_H
#include "Person.h"

class Decorator : public Person
{
protected:
    Person* person_;
public:
    void Decorate(Person* person);
    ~Decorator();
    void show();
};

class TShirt : public Decorator
{
public:
    void show();
};

class Dress : public Decorator
{
public:
    void show();
};

#endif
