#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy
{
public:
    virtual double getResult(const double &cost) = 0;
};

class StrategyRebate : public Strategy
{
private:
    double rebate_;
public:
    StrategyRebate(const double &rebate);
    double getResult(const double &cost);
};

class StrategyReturn : public Strategy
{
private:
    long limit_;
    long give_back_;
public:
    StrategyReturn(const long &limit, const long &give_back);
    double getResult(const double &cost);
};

class StrategyNormal : public Strategy
{
public:
    double getResult(const double &cost);
};

#endif
