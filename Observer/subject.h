#ifndef SUBJECT_H
#define SUBJECT_H
#include <list>
#include <iostream>
using namespace std;

typedef void (*updateMethod)();

template <typename T>
class Subject
{
protected:
    list<T> update;
public:
    virtual void add(T func)
    {
        update.push_back(func);
    };
    virtual void remove(T func)
    {
        update.remove(func);
    };
    virtual void notify() = 0;
};

class Boss: public Subject<updateMethod>
{
public:
    void notify()
    {
        list<updateMethod>::iterator it;
        for(it = update.begin(); it != update.end(); ++ it)
        {
            cout<<"boss is coming!!!"<<endl;
            (*it)();
        }
    };
};

class Assistant: public Subject<updateMethod>
{
public:
    void notify()
    {
        list<updateMethod>::iterator it;
        for(it = update.begin(); it != update.end(); ++ it)
        {
            cout<<"assistant said: boss is coming!!!"<<endl;
            (*it)();
        }
    };
};

#endif
