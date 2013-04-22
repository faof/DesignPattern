#include <cstdlib>
#include <iostream>
#include "subject.h"
#include "observer.h"

using namespace std;

int main(int argc, char *argv[])
{
    Subject<updateMethod>* boss = new Boss();
    Subject<updateMethod>* assi = new Assistant();
    StockObserver o1("faof", boss);
    NBAObserver o2("dang", boss);
    boss->add(&o1.closeStock);
    boss->add(&o2.closeNBA);
    boss->notify();
    assi->add(&o1.closeStock);
    assi->add(&o2.closeNBA);
    assi->notify();
    assi->remove(&o2.closeNBA);
    assi->notify();
    system("PAUSE");
    delete boss;
    delete assi;
    return EXIT_SUCCESS;
}
