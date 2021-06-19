#include<iostream>
#include"MyLib.h"
#include"Task1.h"
#include"Task2.h"
#include"Task3.h"

using namespace std;
using namespace myLib;

void Task1()
{
	cout << "Подсчет кол-ва отрицательных элементов массива:" << endl << endl;
	cout << "Введите кол-во элементов массива: ";
	size_t size = 0;
	size = GetUserInput(false);
	float* arrPtr = task1::initArray(size);
	if (arrPtr)
	{
		PrintArr(size, arrPtr);
		size_t qtePositive = 0, qteNegative = 0;
		task1::countingNumbers(size, arrPtr, qtePositive, qteNegative);
		cout << "Положительных элементов: " << qtePositive << endl;
		cout << "Отрицательных элементов: " << qteNegative << endl;
	}
	else cout << "Не удалсь выделить память под массив!" << endl;
}

void Task2()
{
	cout << "Проверка принадлежности введеного числа интервалу:" << endl << endl;
	cout << "Введите положительное число: ";
	unsigned short a = GetUserInput(true);
	const unsigned short end = 100;
	if (checkNumberInInterval(a, end)) cout << "true";
	else cout << "false";
	cout << endl;
}

void Task3()
{
#define SIZE 6

	cout << "Сортировка пользовательского массива:" << endl << endl;
	int* arrPtr = createIntArr(SIZE);
	initArr(arrPtr, SIZE);
	bubbleSort(arrPtr, SIZE);
	PrintArr(SIZE, false, arrPtr);
}

void Task4()
{

}

int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(0));

	unsigned short taskNumber = 0;
	while (true)
	{
		taskNumber = getUserSelectedTask(5);
		switch (taskNumber)
		{
		case 1: Task1();
			break;
		case 2: Task2();
			break;
		case 3: Task3();
			break;
		case 4: Task4();
			break;
		}
		cout << endl;
	}
}