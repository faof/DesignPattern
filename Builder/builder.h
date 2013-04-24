#ifndef BUILDER_H
#define BUILDER_H

#include <string>
#include <iostream>
using namespace std;

class PersonBuilder
{
protected:
    string name_;
public:
    PersonBuilder(const string& name)
    {
        name_ = name;
    };
    virtual void buildHead() = 0;
    virtual void buildHand() = 0;
    virtual void buildBody() = 0;
    virtual void buildLeg() = 0;
};

class ThinPersonBuilder: public PersonBuilder
{
public:
    ThinPersonBuilder(const string& name):PersonBuilder(name)
    {};
    void buildHead()
    {
        cout<<"build thin person head"<<endl;
    };
    void buildHand()
    {
        cout<<"build thin person hand"<<endl;
    };
    void buildBody()
    {
        cout<<"build thin person body"<<endl;
    };
    void buildLeg()
    {
        cout<<"build thin person leg"<<endl;
    };
};

class FatPersonBuilder: public PersonBuilder
{
public:
    FatPersonBuilder(const string& name):PersonBuilder(name)
    {};
    void buildHead()
    {
        cout<<"build fat person head"<<endl;
    };
    void buildHand()
    {
        cout<<"build fat person hand"<<endl;
    };
    void buildBody()
    {
        cout<<"build fat person body"<<endl;
    };
    void buildLeg()
    {
        cout<<"build fat person leg"<<endl;
    };
};

#endif
