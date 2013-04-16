#include "Operation.h"

Operation::Operation()
{
    number_A_ = 1.0;
    number_B_ = 1.0;
}

void Operation::setA(const double &a)
{
    number_A_ = a;
}

void Operation::setB(const double &b)
{
    number_B_ = b;
}

double OperationAdd::getResult()
{
    return number_A_ + number_B_;
}

double OperationSub::getResult()
{
    return number_A_ - number_B_;
}

double OperationMul::getResult()
{
    return number_A_ * number_B_;
}

double OperationDiv::getResult()
{
    return number_A_ / number_B_;
}
