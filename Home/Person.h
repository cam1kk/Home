#pragma once
#include <iostream>

class Person
{
private:
	char* fullname;
public:
	Person() : fullname{ nullptr }
	{}

	Person(const char* name) 
	: fullname{new char (strlen(name) + 1)}
	{
		strcpy_s(fullname, strlen(name) + 1, name);
	}

	Person(const Person& person)
	{
		fullname = new char(strlen(person.fullname) + 1);
		strcpy_s(fullname, strlen(person.fullname) + 1, person.fullname);
	}

	~Person()
	{
		delete[] fullname;
	}

};

