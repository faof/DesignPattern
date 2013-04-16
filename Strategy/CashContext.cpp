#include "Strategy.h"
#include "CashContext.h"

CashContext::CashContext(Strategy* strategy)
{
    strategy_ = strategy;
}

CashContext::~CashContext()
{
    delete strategy_;
}

double CashContext::getResult(const double &cost)
{
    return strategy_->getResult(cost);
}
