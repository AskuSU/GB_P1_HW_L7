#include<iostream>
#include"MyLib.h"

using namespace std;

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
		/*case 1: Task1();
			break;
		case 2: Task2();
			break;
		case 3: Task3();
			break;
		case 4: Task4();
			break;
		case 5: Task5();
			break;*/
		}
		cout << endl;
	}
}