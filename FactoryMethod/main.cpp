#include <cstdlib>
#include <iostream>
#include "leifeng.h"
#include "factory_interface.h"
using namespace std;

int main(int argc, char *argv[])
{
    FactoryInterface* fac1 = new VolunteerFactory();
    LeiFeng* lf1 = fac1->createLeiFeng();
    FactoryInterface* fac2 = new UnderGraduateFactory();
    LeiFeng* lf2 = fac2->createLeiFeng();
    lf1->sweep();
    lf2->wash();
    delete fac1;
    delete lf1;
    delete fac2;
    delete lf2;
    system("PAUSE");
    return EXIT_SUCCESS;
}
