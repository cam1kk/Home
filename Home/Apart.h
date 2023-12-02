#pragma once
#include <iostream>
#include "Person.h"
using namespace std;
class Apart
{
private:
    Person* apart;
    int apartSize;
public:
    Apart() : apart{ nullptr }
    {}
    Apart(int size) : 
        apartSize{ size },
        apart{ new Person[size] }
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter full name(Max 30): ";
            char name[30]{};
            cin >> name;
            apart[i] = Person(name);
        }
    }
    Apart(const Apart& apartt)
        : apartSize{apartt.apartSize},
          apart{new Person[apartt.apartSize]}
    {
        for (int i = 0; i < apartSize; i++)
        {
            apart[i] = apartt.apart[i]; 
        }
    }
    Person* getApart() {
        return apart;
    }
    int getapartSize() {
        return apartSize;
    }
};

