#include "url.h"
#include "Proxy.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    Url* url = new Url("http://www.hello.world/");
    UrlProxy* proxy = new UrlProxy(url);
    proxy->fetchUrl();
    proxy->downloadUrl();
    proxy->sendPost();
    delete proxy;
    system("PAUSE");
    return EXIT_SUCCESS;
}
