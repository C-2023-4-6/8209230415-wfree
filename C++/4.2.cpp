#include<iostream>
using namespace std;
void swap(int* p, int* q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}
int main()
{
	int list[10] = { 5,6,4,7,1,9,8,2,3,0 };
	int listSize = sizeof list / sizeof list[0];
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
	for (int i = 0; i < 10; i++)
	{
		cout << list[i] << endl;
	}
	
	return 0;
}