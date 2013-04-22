#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include <string>
#include "subject.h"
using namespace std;

class StockObserver
{
private:
    string name_;
    Subject<updateMethod>* sub_;
public:
    StockObserver(const string& name, Subject<updateMethod>* sub)
    {
        name_ = name;
        sub_ = sub;
    };
    static void closeStock()
    {
         cout<<"I'm "<<"closing stock..."<<endl;
    };
};

class NBAObserver
{
private:
    string name_;
    Subject<updateMethod>* sub_;
public:
    NBAObserver(const string& name, Subject<updateMethod>* sub)
    {
        name_ = name;
        sub_ = sub;
    };
    static void closeNBA()
    {
         cout<<"I'm "<<"closing NBA..."<<endl;
    };
};

#endif
