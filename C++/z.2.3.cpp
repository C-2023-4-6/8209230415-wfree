#include <iostream>
using namespace std;
void Paixu(int*arr,int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	
	int size;
	cout << "请输入一个数组:";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << arr << endl;
	cout << *arr << endl;
	Paixu(arr, size);
	for (int i = 0; i < size; i++)
	{
		cout << *arr << " ";
		arr++;
	}
	delete [] arr;
}