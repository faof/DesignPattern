#ifndef OPERATION_H
#define OPERATION_H

class Operation
{
protected:
    double number_A_;
    double number_B_;
public:
    Operation();
    void setA(const double &a);
    void setB(const double &b);
    virtual double getResult() = 0;
};

class OperationAdd : public Operation
{
public:
    double getResult();
};

class OperationSub : public Operation
{
public:
    double getResult();
};

class OperationMul : public Operation
{
public:
    double getResult();
};

class OperationDiv : public Operation
{
public:
    double getResult();
};
#endif
