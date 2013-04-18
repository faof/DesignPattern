#include <cstdlib>
#include <iostream>
#include "resume.h"

using namespace std;

int main(int argc, char *argv[])
{
    Work w1;
    w1.company_ = "IBM";
    Work* w2 = new Work();
    w2->company_ = "Google";
    Resume re1(22, 1, w1, w2);
    Resume re2(re1);
    re2.age_ = 23;
    re2.sex_ = 0;
    re2.work_.company_ = "MS";
    re2.pWork_->company_ = "Amazon";
    cout<<re1<<endl;
    cout<<re2<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
