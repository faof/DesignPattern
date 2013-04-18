#ifndef COOK_H
#define COOK_H
#include <iostream>
using namespace std;

class Cook
{
private:
    virtual void step1() = 0;
    virtual void step2() = 0;
public:
    void doCook()
    {
        step1();
        step2();
    };
};

class Vegetable: public Cook
{
private:
    void step1()
    {
        cout<<"wash them......"<<endl;
    };
    void step2()
    {
        cout<<"eat them......"<<endl;
    };
};

class Chicken: public Cook
{
private:
    void step1()
    {
        cout<<"kill them......"<<endl;
    };
    void step2()
    {
        cout<<"fire them......"<<endl;
    };
};

#endif
