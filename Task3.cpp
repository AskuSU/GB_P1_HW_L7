#include"Task3.h"

using namespace std;

#define SWAP(x, y) int a = x; x = y; y = a

int* createIntArr(size_t size)
{
	int* arr = new int[size];
	return arr;
}

void initArr(int* arr, size_t size)
{
	cout << "¬ведите подр€д " << size << " элементов массива:" << endl;
	for (size_t i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void bubbleSort(int* arr, size_t size)
{
	for (size_t i = 0; i < size - 1; i++)
		for (size_t j = 0; j < size - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				SWAP(arr[j], arr[j + 1]);
			}	
}
