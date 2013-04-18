#ifndef LEIFENG_H
#define LEIFENG_H
#include <iostream>
using namespace std;

class LeiFeng
{
public:
    virtual void sweep() = 0;
    virtual void wash() = 0;
    virtual void buyRice() = 0;
};

class UnderGraduate: public LeiFeng
{
public:
    void sweep()
    {
        cout<<"under graduate is sweeping"<<endl;
    };
     void wash()
    {
        cout<<"under graduate is washing"<<endl;
    };
     void buyRice()
    {
        cout<<"under graduate is buying rice"<<endl;
    };
};

class Volunteer: public LeiFeng
{
public:
    void sweep()
    {
        cout<<"volunteer is sweeping"<<endl;
    };
     void wash()
    {
        cout<<"volunteer is washing"<<endl;
    };
     void buyRice()
    {
        cout<<"volunteer is buying rice"<<endl;
    };
};

#endif
