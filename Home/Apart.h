#pragma once
#include <iostream>
#include "Person.h"
using namespace std;
class Apart
{
private:
    Person* person;
    int personSize;
public:
    Apart() : person{ nullptr }
    {}
    Apart(int size) : 
        personSize{ size },
        person{ new Person[size] }
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter full name(Max 30): ";
            char* name = new char[30];
            cin >> name;
            person[i] = Person(name);
            delete[] name;
        }
    }
    Apart(const Apart& apart)
        : personSize{apart.personSize},
          person{new Person[apart.personSize]}
    {
        for (int i = 0; i < personSize; i++)
        {
            person[i] = apart.person[i]; 
        }
    }
    ~Apart()
    {
        delete[] person;
    }
};

