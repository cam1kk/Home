#pragma once
#include <iostream>
#include "Apart.h"
#include "Person.h"
class Home
{
private:
    Apart* apart;
    int apartSize;
public:
    Home(int size) :
        apartSize{ size },
        apart{ new Apart[size] } 
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the size of the apartment: ";
            int sizeap{};
            cin >> sizeap;
            apart[i] = Apart(sizeap);
        }
    }
    Home(const Home& home) :
        apartSize{ home.apartSize },
        apart{ new Apart[home.apartSize] }
    {
        for (int i = 0; i < apartSize; i++)
        {
            apart[i] = home.apart[i];
        }
    }
    ~Home()
    {
        delete[] apart;
    }
};