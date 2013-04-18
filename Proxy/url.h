#ifndef URL_H
#define URL_H
#include<string>
using namespace std;

class Url
{
private:
    string url_;
public:
    Url(const string &url)
    {
        url_ = url;
    };
    
    string getUrl()
    {
        return url_;
    };
    
    void setUrl(const string &url)
    {
        url_ = url;
    }
};

#endif
