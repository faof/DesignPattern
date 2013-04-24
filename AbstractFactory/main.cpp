#include <cstdlib>
#include <iostream>
#include "data_item.h"
#include "data_operation.h"
#include "db_abstract_factory.h"

using namespace std;

int main(int argc, char *argv[])
{
    User usr;
    Department dep;
    usr.age = 24;
    usr.name = "faof";
    dep.user_num = 100;
    dep.location = "Wuhan";
    DbAbstractFactory* db1 = new SqlFactory();
    DbAbstractFactory* db2 = new OracleFactory();
    UserOperation* user_ = db1->createUser();
    DepartmentOperation* dep_ = db2->createDepartment();
    user_->setUser(usr);
    user_->getUser();
    dep_->setDepartment(dep);
    dep_->getDepartment();
    delete db1;
    delete db2;
    delete user_;
    delete dep_;
    system("PAUSE");
    return EXIT_SUCCESS;
}
