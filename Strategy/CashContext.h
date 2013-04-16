#ifndef CASH_CONTEXT_H
#define CASH_CONTEXT_H
#include "Strategy.h"

class CashContext
{
private:
    Strategy* strategy_;
public:
    CashContext(Strategy* strategy);
    ~CashContext();
    double getResult(const double &cost);
};

#endif
