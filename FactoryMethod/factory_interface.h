#ifndef FACTORY_INTERFACE_H
#define FACTORY_INTERFACE_H

#include "leifeng.h"

class FactoryInterface
{
public:
    virtual LeiFeng* createLeiFeng() = 0;
};

class VolunteerFactory: public FactoryInterface
{
public:
    LeiFeng* createLeiFeng()
    {
        return new Volunteer();
    };
};

class UnderGraduateFactory: public FactoryInterface
{
public:
    LeiFeng* createLeiFeng()
    {
        return new UnderGraduate();
    };
};
#endif
