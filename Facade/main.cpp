#include <cstdlib>
#include <iostream>
#include "facade.h"

using namespace std;

int main(int argc, char *argv[])
{
    Facade facade;
    facade.doA();
    facade.doB();
    system("PAUSE");
    return EXIT_SUCCESS;
}
