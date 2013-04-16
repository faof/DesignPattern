#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person
{
private:
    string name_;
public:
    void setName(const string &name);
    virtual void show() = 0;
};

class Student: public Person
{
public:
    void show();
};

#endif
