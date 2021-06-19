#pragma once
#include<string>
#include<iostream>
#include<fstream>

using namespace std;

#pragma pack(push, 1)
typedef struct employee
{
	string name, surname, position;
	unsigned short yearOfBirth;
	float wage;
	employee();
} Employee;
#pragma pack(pop)

void printEmployee(Employee* empl);
void saveStructToFile(Employee* empl, string nameF);