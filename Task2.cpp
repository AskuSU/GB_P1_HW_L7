#include"Task2.h"

#define IN_INTERVAL(x, y) ((x >= 0)&&(x < y))

bool checkNumberInInterval(size_t number, size_t end)
{
	return IN_INTERVAL(number, end);
}
