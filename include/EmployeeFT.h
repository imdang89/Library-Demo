#pragma once
#include"Person.h"

class EmployeeFT : public Person
{
private:
    int day;
    long money;
public:
    EmployeeFT();
    EmployeeFT(string, int, string, string, string, int, long);
    int getDay();
    long getMoney();
    void display();
    long salary();
    vector<EmployeeFT> getMaxSalary(vector<EmployeeFT>);
};