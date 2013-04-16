#include "Person.h"
#include "Decorator.h"
#include <iostream>
using namespace std;

void Decorator::Decorate(Person* person)
{
    person_ = person;
}

Decorator::~Decorator()
{
    delete person_;
}

void Decorator::show()
{
    person_->show();
}

void TShirt::show()
{
    person_->show();
    cout<<"Wear TShirt"<<endl;
}

void Dress::show()
{
    person_->show();
    cout<<"Wear Dress"<<endl;
}
