#include <iostream>
using namespace std;

int Merge(int* array1, int* array2, int maxsize)
{
	//设定最开始的长度为 0，之后找到一个不同的就添加进去 
	int realSize = 0;
	for (int i = 0; i < maxsize; i++)
	{
		int j = 0;
		//遍历现有的数组，判断是否有重复的 
		for (j = 0; j < realSize; j++)
		{
			if (array1[i] == array2[j])
			{
				break;
			}
		}
		//此时证明遍历完了整个数组，不存在重复的数据，因此进行添加 
		if (j == realSize)
		{
			//插入数据 
			array2[realSize] = array1[i];
			realSize++;
		}
		//array1中的一个元素被判断完成 
	}
	//将最后整个数组中有意义的长度返回，方便输出 
	return realSize;
}

int main()
{
	int maxsize = 10;
	int array1[10];
	int array2[10];
	cout << "Enter the numbers:";
	for (int i = 0; i < maxsize; i++)
	{
		cin >> array1[i];
	}
	int newLength = Merge(array1, array2, maxsize);
	cout << "The distinct numbers are:";
	for (int i = 0; i < newLength; i++)
	{
		cout << array2[i] << ' ';
	}
}

