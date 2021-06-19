#include"Task4.h"

employee::employee()
{	
	cout << "Введите Имя сотрудника: ";
	cin >> name;
	cout << "Введите Фамилию сотрудника: ";
	cin >> surname;
	cout << "Введите Год рождени сотрудника: ";
	cin >> yearOfBirth;
	cout << "Введите Должность на которой работает сотрудник: ";
	cin >> position;
	cout << "Введите ЗП сотрудника: ";
	cin >> wage;	
}

void printEmployee(Employee* empl)
{
	cout << endl;
	cout << "Сотрудник: " << empl->surname << " " << empl->name << endl;
	cout << "Год рождения: " << empl->yearOfBirth << endl;
	cout << "Должность: " << empl->position << endl;
	cout << "ЗП: " << empl->wage << endl << endl;

	cout << "Размер структуры Employee = " << sizeof(*empl) << " байт." << endl;
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
		cout << "Не удалось создать файл " << nameF << ".txt" << endl;
	}
}
