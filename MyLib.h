#pragma once
#include<iostream>

using namespace std;

namespace myLib
{
	unsigned short GetUserInput(bool allowZero);
	unsigned short getUserSelectedTask(unsigned short qtyTask);

	void PrintArr(size_t size, double* Arr);
	void PrintArr(size_t size, float* Arr);
	void PrintArr(size_t size, bool NeedCnt, unsigned short* Arr);
	void PrintArr(size_t size, bool NeedCnt, int* Arr, size_t medianPos);
}
