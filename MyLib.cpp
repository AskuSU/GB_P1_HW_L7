#include"MyLib.h"

namespace myLib
{
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

	void PrintArr(size_t size, double* Arr)
	{
		cout << "���-�� ��������� = " << size << endl;
		for (size_t i = 0; i < size; i++)
		{
			cout << Arr[i] << ' ';
		}
		cout << endl;
	}

	void PrintArr(size_t size, float* Arr)
	{
		cout << "���-�� ��������� = " << size << endl;
		for (size_t i = 0; i < size; i++)
		{
			cout << Arr[i] << ' ';
		}
		cout << endl;
	}

	void PrintArr(size_t size, bool NeedCnt, unsigned short* Arr)
	{
		if (NeedCnt) cout << "���-�� ��������� = " << size << endl;
		for (size_t i = 0; i < size; i++)
		{
			cout << Arr[i] << ' ';
		}
		cout << endl;
	}

	void PrintArr(size_t size, bool NeedCnt, int* Arr, size_t medianPos)
	{
		if (NeedCnt) cout << "���-�� ��������� = " << size << endl;
		for (size_t i = 0; i < size; i++)
		{
			if (medianPos > 0 && medianPos == i) cout << "|| ";
			cout << Arr[i] << ' ';
		}
		cout << endl;
	}
}