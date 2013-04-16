#include <cstdlib>
#include <iostream>
#include <string>
#include "Operation.h"
#include "OperationFactory.h"
using namespace std;

using namespace std;

int main(int argc, char *argv[])
{
    Operation* oper = OperationFactory::createOperation("+");
    if(oper)
    {
        oper->setA(1.0);
        oper->setB(2.0);
        cout<<oper->getResult()<<endl;
    }
    system("PAUSE");
    delete oper;
    return EXIT_SUCCESS;
}
