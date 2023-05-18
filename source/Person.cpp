#include "Person.h"

Person::Person() {}

Person::Person(string name, int age, string add, string tel, string sex)
{
    this->name = name;
    this->age = age;
    this->add = add;
    this->tel = tel;
    this->sex = sex;
}

string Person::getName()
{
    return name;
}

int Person::getAge()
{
    return age;
}

string Person::getAdd()
{
    return add;
}

string Person::getTel()
{
    return tel;
}

string Person::getSex()
{
    return sex;
}

void Person::display()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Add: " << add << endl;
    cout << "Tel: " << tel << endl;
    cout << "Sex: " << sex << endl;
}

vector<Person*> Person::findPerson(vector<Person*> p)
{
    vector<Person*> v;
    for (int i = 0; i < p.size(); i++)
    {
        if (p[0]->add == "HN")
        {
            v.push_back(p[i]);
        }

    };
    return v;
}