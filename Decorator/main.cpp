#include <cstdlib>
#include <iostream>
#include "Person.h"
#include "Decorator.h"

using namespace std;

int main(int argc, char *argv[])
{
    Person* stu = new Student();
    stu->setName("faof");
    Decorator* ts = new TShirt();
    Decorator* ds = new Dress();
    ts->Decorate(stu);
    ds->Decorate(ts);
    ds->show();
    delete ds;
    system("PAUSE");
    return EXIT_SUCCESS;
}
