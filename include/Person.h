#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
protected:
    string name;
    int age;
    string add;
    string tel;
    string sex;
public:
    Person();
    Person(string, int, string, string, string);
    string getName();
    int getAge();
    string getAdd();
    string getTel();
    string getSex();
    virtual void display();
    virtual long salary()=0;
    static vector<Person *> findPerson(vector <Person *>);
};