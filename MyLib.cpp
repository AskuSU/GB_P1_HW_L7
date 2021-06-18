#include"MyLib.h"

unsigned short GetUserInput()
{
	while (true)
	{
		int input;
		cin >> input;
		if (cin.fail() || input <= 0)
		{
			cout << "������ �����, ��������� ����: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return (unsigned short)input;
		}
	}
}

unsigned short getUserSelectedTask(unsigned short qtyTask)
{
	unsigned short taskNumber = 0;
	do
	{
		cout << "������� ����� ������ �� 1 �� " << qtyTask << ":" << endl;
		taskNumber = GetUserInput();
	} while (taskNumber > qtyTask || taskNumber < 1);

	cout << endl;

	return taskNumber;
}