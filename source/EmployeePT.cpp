#include "EmployeePT.h"
// #include "Person.h"

EmployeePT::EmployeePT() {}

EmployeePT::EmployeePT(string name, int age, string add, string tel, string sex, int hour, long money)
{
    this->name = name;
    this->age = age;
    this->add = add;
    this->tel = tel;
    this->sex = sex;
    this->hour = hour;
    this->money = money;
}

int EmployeePT::getHour()
{
    return hour;
}

long EmployeePT::getMoney()
{
    return money;
}

void EmployeePT::display()
{
    cout << "\t\t\nEmployee Part Time:\n";
    Person::display();
    cout << "Hours: " << hour << endl;
    cout << "Money: " << money << endl;
    cout << "Salary: " << salary() << endl;
}

long EmployeePT::salary()
{
    return money* hour;
}

 vector<EmployeePT> EmployeePT::getMaxSalary(vector<EmployeePT> p)
 {
     long maxSalary = p[0].salary();
     for (int i = 0; i < p.size(); i++)
     {
         if (maxSalary < p[i].salary())
         {
             maxSalary = p[i].salary();
         }
     }
     vector<EmployeePT> v;
     for (int i = 0; i < p.size(); i++)
     {
         if (p[i].salary() == maxSalary)
         {
             v.push_back(p[i]);
         }
     }
     return v;
 }

