#include "Operation.h"
#include "OperationFactory.h"
#include <string>
using namespace std;

Operation* OperationFactory::createOperation(const string &operation)
{
    if(!operation.compare("+"))
    {
        return new OperationAdd();
    }
    else if(!operation.compare("-"))
    {
        return new OperationSub();
    }
    else if(!operation.compare("*"))
    {
        return new OperationMul();
    }
    else if(!operation.compare("/"))
    {
        return new OperationDiv();
    }
    else
    {
        return 0;
    }
}
