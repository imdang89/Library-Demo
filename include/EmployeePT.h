#pragma once
#include"Person.h"

class EmployeePT : public Person
{
private:
    int hour;
    long money;
public:
    EmployeePT();
    EmployeePT(string, int, string, string, string, int, long);
    int getHour();
    long getMoney();
    void display();
    long salary();
    vector<EmployeePT> getMaxSalary(vector<EmployeePT>);

};