#include <cstdlib>
#include <iostream>
#include "cook.h"

using namespace std;

int main(int argc, char *argv[])
{
    Cook* cook1 = new Vegetable();
    Cook* cook2 = new Chicken();
    cook1->doCook();
    cook2->doCook();
    delete cook1;
    delete cook2;
    system("PAUSE");
    return EXIT_SUCCESS;
}
