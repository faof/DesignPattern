#ifndef EXPLORER_H
#define EXPLORER_H

#include "url.h"
#include "url_interface.h"
#include <iostream>
using namespace std;

class Explorer: public UrlInterface
{
private:
    Url* url_;
public:
    Explorer(Url* url)
    {
        url_ = url;
    };
    ~Explorer()
    {
        delete url_;
    };
    void fetchUrl()
    {
        cout<<"fetching url"<<endl;
    };
    void downloadUrl()
    {
        cout<<"downloading url"<<endl;
    };
    void sendPost()
    {
        cout<<"sending post"<<endl;
    };
};

#endif
