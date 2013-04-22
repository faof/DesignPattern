#ifndef FACADE_H
#define FACADE_H

#include "method.h"
class Facade
{
private:
    MethodOne* one;
    MethodTwo* two;
    MethodThree* three;
public:
    Facade()
    {
        one = new MethodOne();
        two = new MethodTwo();
        three = new MethodThree();
    };
    ~Facade()
    {
        delete one;
        delete two;
        delete three;
    };
    void doA()
    {
        cout<<"do A"<<endl;
        one->doMethod();
        two->doMethod();
    };
    void doB()
    {
        cout<<"do B"<<endl;
        one->doMethod();
        three->doMethod();
    };
};

#endif
