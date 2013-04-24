#ifndef DB_ABSTRACT_FACTORY_H
#define DB_ABSTRACT_FACTORY_H

#include "data_item.h"
#include "data_operation.h"

class DbAbstractFactory
{
public:
    virtual UserOperation* createUser() = 0;
    virtual DepartmentOperation* createDepartment() = 0;
};

class SqlFactory: public DbAbstractFactory
{
public:
    UserOperation* createUser()
    {
        return new SqlUser();
    };
    DepartmentOperation* createDepartment()
    {
        return new SqlDepartment();
    };
};

class OracleFactory: public DbAbstractFactory
{
public:
    UserOperation* createUser()
    {
        return new OracleUser();
    };
    DepartmentOperation* createDepartment()
    {
        return new OracleDepartment();
    };
};

#endif
