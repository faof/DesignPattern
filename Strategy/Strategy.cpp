#include "Strategy.h"

StrategyRebate::StrategyRebate(const double &rebate)
{
    rebate_ = rebate;
}

double StrategyRebate::getResult(const double &cost)
{
    return cost * rebate_;
}

StrategyReturn::StrategyReturn(const long &limit, const long &give_back)
{
    limit_ = limit;
    give_back_ = give_back;
}

double StrategyReturn::getResult(const double &cost)
{
    int multi = cost/limit_;
    if(multi > 0)
        return cost - give_back_ * multi;
    else
        return cost;
}

double StrategyNormal::getResult(const double &cost)
{
    return cost;
}
