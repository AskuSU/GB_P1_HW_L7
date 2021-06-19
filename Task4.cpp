#include"Task4.h"

employee::employee()
{	
	cout << "������� ��� ����������: ";
	cin >> name;
	cout << "������� ������� ����������: ";
	cin >> surname;
	cout << "������� ��� ������� ����������: ";
	cin >> yearOfBirth;
	cout << "������� ��������� �� ������� �������� ���������: ";
	cin >> position;
	cout << "������� �� ����������: ";
	cin >> wage;	
}

void printEmployee(Employee* empl)
{
	cout << endl;
	cout << "���������: " << empl->surname << " " << empl->name << endl;
	cout << "��� ��������: " << empl->yearOfBirth << endl;
	cout << "���������: " << empl->position << endl;
	cout << "��: " << empl->wage << endl << endl;

	cout << "������ ��������� Employee = " << sizeof(*empl) << " ����." << endl;
}

void saveStructToFile(Employee* empl, string nameF)
{
	ofstream fout(nameF + ".txt", ios_base::binary);

	if (fout.is_open())
	{
		fout.write((char*)empl, sizeof(*empl));
		fout.close();
	}
	else
	{
		cout << "�� ������� ������� ���� " << nameF << ".txt" << endl;
	}
}
