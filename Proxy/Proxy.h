#ifndef PROXY_H
#define PROXY_H
#include "url_interface.h"
#include "explorer.h"
#include "url.h"

class UrlProxy: public UrlInterface
{
private:
    Explorer* explorer_;
public:
    UrlProxy(Url* url)
    {
        explorer_ = new Explorer(url);
    };
    ~UrlProxy()
    {
        delete explorer_;
    };
    void fetchUrl()
    {
        explorer_->fetchUrl();
    };
    void downloadUrl()
    {
        explorer_->downloadUrl();
    };
    void sendPost()
    {
        explorer_->sendPost();
    };
};

#endif
