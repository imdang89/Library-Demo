#include "EmployeeFT.h"

EmployeeFT::EmployeeFT() {}

EmployeeFT::EmployeeFT(string name, int age, string add, string tel, string sex, int day, long money)
{
	this->name = name;
	this->age = age;
	this->add = add;
	this->tel = tel;
	this->sex = sex;
	this->day = day;
	this->money = money;
}

int EmployeeFT::getDay()
{
	return day;
}

long EmployeeFT::getMoney()
{
	return money;
}

void EmployeeFT::display()
{
	cout << "Employee Full Time:\n";
	Person::display();
	cout << "Day: " << day << endl;
	cout << "Money: " << money << endl;
	cout << "Salary: " << salary() << endl;
}

long EmployeeFT::salary()
{
	return day * money;
}

vector<EmployeeFT> EmployeeFT::getMaxSalary(vector<EmployeeFT> p)
{
	long maxSalary = p[0].salary();
	for (int i = 0; i < p.size(); i++)
	{
		if (maxSalary < p[i].salary())
		{
			maxSalary = p[i].salary();
		}
	}
	vector<EmployeeFT> v;
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i].salary() == maxSalary)
		{
			v.push_back(p[i]);
		}
	}
	return v;
}