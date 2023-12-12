#include<iostream>
using namespace std;
int main()
{
	bool arr[100] = {};
	for (int i = 0; i < 100; i++)
	{
		arr[i] = 1;
	}//第一个学生全部打开
	for (int i = 1; i < 100; i++)//第二个学生到第一百个
	{
		for (int j = i; j < 100; j=j + i + 2)//从第n个柜子开始，每个n个柜子改变;//转变
	
		{
			arr[j] = !arr[j];
		
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == 1)
		{
			cout << i+1 << " ";
		}
	}

	return 0;
}