#include <cstdlib>
#include <iostream>
#include <string>
#include "builder.h"
#include "director.h"

using namespace std;

int main(int argc, char *argv[])
{
    PersonBuilderDirector pbd_thin(new ThinPersonBuilder("faof"));
    pbd_thin.buildPerson();
    PersonBuilderDirector pbd_fat(new FatPersonBuilder("faof"));
    pbd_fat.buildPerson();
    system("PAUSE");
    return EXIT_SUCCESS;
}
