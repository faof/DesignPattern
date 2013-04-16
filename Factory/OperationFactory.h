#ifndef OPERATION_FACTORY_H
#define OPERATION_FACTORY_H

#include "Operation.h"
#include <string>
using namespace std;

class OperationFactory
{
public:
    static Operation* createOperation(const string &operation);
private:
    OperationFactory();
};

#endif
