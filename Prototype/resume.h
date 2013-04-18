#ifndef RESUME_H
#define RESUME_H
#include <iostream>
using namespace std;

class Work
{
public:
    string company_;
    friend ostream& operator << (ostream& stream, Work& instance)
    {
        stream<<"company is "<<instance.company_<<".";
    };
};

class Resume
{
public:
    int age_;
    int sex_;
    Work work_;
    Work* pWork_;
    Resume(const int& age, const int& sex, const Work& work, Work* pWork)
    {
        age_ = age;
        sex_ = sex;
        work_ = work;
        pWork_ = pWork;
    };
    Resume(Resume& r)
    {
        age_ = r.age_;
        sex_ = r.sex_;
        work_ = r.work_;
        pWork_ = new Work();
        pWork_->company_ = r.pWork_->company_;
    };
    friend ostream& operator << (ostream& stream, Resume& instance)
    {
        stream<<"age is: "<<instance.age_<<". sex is: "<<instance.sex_<<". "<<instance.work_<<" "<<*instance.pWork_;
    };
    ~Resume()
    {
        delete pWork_;
    };
};

#endif
