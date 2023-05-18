
#include <iostream>
#include<vector>
#include "Person.h"
#include "EmployeePT.h"
#include "EmployeeFT.h"

using namespace std;

int main()
{
    vector<EmployeePT> e;
	e.push_back(EmployeePT("a", 18, "HN", "09842", "nam", 7, 30000));
	e.push_back(EmployeePT("b", 18, "HN", "09842", "nam", 7, 40000));
	e.push_back(EmployeePT("c", 18, "HN", "09842", "nam", 7, 50000));
	e.push_back(EmployeePT("d", 18, "HN", "09842", "nam", 7, 60000));
	e.push_back(EmployeePT("e", 18, "HN", "09842", "nam", 7, 50000));
	e.push_back(EmployeePT("f", 18, "HN", "09842", "nam", 7, 60000));
	EmployeePT b("a", 18, "HN", "09842", "nam", 7, 30000);
	auto m= b.getMaxSalary(e);
	for (int i=0; i< m.size(); i++)
	{
		m[i].display();
	}
	

    return 0;
}

