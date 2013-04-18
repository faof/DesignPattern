#ifndef URL_INTERFACE_H
#define URL_INTERFACE_H

class UrlInterface
{
public:
    virtual void fetchUrl() = 0;
    virtual void downloadUrl() = 0;
    virtual void sendPost() = 0;
};

#endif
