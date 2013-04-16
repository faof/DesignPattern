#include <cstdlib>
#include <iostream>
#include "Strategy.h"
#include "CashContext.h"

using namespace std;

int main(int argc, char *argv[])
{
    CashContext* cc1 = new CashContext(new StrategyNormal());
    cout<<cc1->getResult(1000)<<endl;
    CashContext* cc2 = new CashContext(new StrategyRebate(0.5));
    cout<<cc2->getResult(1000)<<endl;
    CashContext* cc3 = new CashContext(new StrategyReturn(300, 100));
    cout<<cc3->getResult(1000)<<endl;
    system("PAUSE");
    delete cc1;
    delete cc2;
    delete cc3;
    return EXIT_SUCCESS;
}
