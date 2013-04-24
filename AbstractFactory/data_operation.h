#ifndef DATA_OPERATION_H
#define DATA_OPERATION_H

#include "data_item.h"

class UserOperation
{
protected:
    User usr_;
public:
     virtual User getUser() = 0;
     virtual void setUser(const User& user) = 0;
};

class DepartmentOperation
{
protected:
    Department dep_;
public:
    virtual Department getDepartment() = 0;
    virtual void setDepartment(const Department& dep) = 0;
};

class SqlUser: public UserOperation
{
public:
    User getUser()
    {
        cout<<"sql user operation:"<<endl;
        cout<<"get user: age: "<<usr_.age<<" name: "<<usr_.name<<endl;
        return usr_;
    };
    void setUser(const User& user)
    {
        cout<<"sql user operation:"<<endl;
        cout<<"set user"<<endl;
        usr_ = user;
    };
};

class OracleUser: public UserOperation
{
public:
    User getUser()
    {
        cout<<"oracle user operation:"<<endl;
        cout<<"get user: age: "<<usr_.age<<" name: "<<usr_.name<<endl;
        return usr_;
    };
    void setUser(const User& user)
    {
        cout<<"oracle user operation:"<<endl;
        cout<<"set user"<<endl;
        usr_ = user;
    };
};

class SqlDepartment: public DepartmentOperation
{
public:
    Department getDepartment()
    {
        cout<<"sql department operation:"<<endl;
        cout<<"get department: num: "<<dep_.user_num<<" location: "<<dep_.location<<endl;
        return dep_;
    };
    void setDepartment(const Department& dep)
    {
        cout<<"sql department operation:"<<endl;
        cout<<"set department"<<endl;
        dep_ = dep;
    };
};

class OracleDepartment: public DepartmentOperation
{
public:
    Department getDepartment()
    {
        cout<<"oracle department operation:"<<endl;
        cout<<"get department: num: "<<dep_.user_num<<" location: "<<dep_.location<<endl;
        return dep_;
    };
    void setDepartment(const Department& dep)
    {
        cout<<"oracle department operation:"<<endl;
        cout<<"set department"<<endl;
        dep_ = dep;
    };
};

#endif
