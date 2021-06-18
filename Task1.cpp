#include"Task1.h"

namespace task1
{
	float* initArray(size_t size)
	{
		float* arr = new float[size];
		if (arr)
		{
			for (size_t i = 0; i < size; i++)
			{
				arr[i] = (float)(rand() % 20000)/100 - 100;
			}
			return arr;
		}
		else
		{
			return nullptr;
		}
		
	}
	void countingNumbers(size_t size, float* arr, size_t& pos, size_t& neg)
	{
		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] >= 0) pos++;
			else neg++;
		}
	}
}