#pragma once
#include <iostream>
#include "Apart.h"
#include "Person.h"
class Home
{
private:
    Apart* home;
    int homeSize;
public:
    Home(int size) :
        homeSize{ size },
        home{ new Apart[size] } 
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the size of the apartment: ";
            int sizeap{};
            cin >> sizeap;
            home[i] = Apart(sizeap);
        }
    }
    Home(const Home& homee) :
        homeSize{ homee.homeSize },
        home{ new Apart[homee.homeSize] }
    {
        for (int i = 0; i < homeSize; i++)
        {
            home[i] = homee.home[i];
        }
    }
    ~Home()
    {
        for (int i = 0; i < homeSize; i++)
        {
            for (int j = 0; j < home[i].getapartSize(); j++)
            {
                Person* a = home[i].getApart();
                delete[] a[j].getPerson();
                cout << "person delete" << endl;
            }
            delete[] home[i].getApart();
            cout << "apart delete" << endl;
        }
        delete[] home;
        cout << "home delete" << endl;
    }
};