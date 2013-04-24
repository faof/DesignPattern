#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "builder.h"

class PersonBuilderDirector
{
private:
    PersonBuilder* pb_;
public:
    PersonBuilderDirector(PersonBuilder* pb)
    {
        pb_ = pb;
    };
    ~PersonBuilderDirector()
    {
        delete pb_;
    };
    void buildPerson()
    {
        pb_->buildHead();
        pb_->buildHand();
        pb_->buildBody();
        pb_->buildLeg();
    };
};

#endif
