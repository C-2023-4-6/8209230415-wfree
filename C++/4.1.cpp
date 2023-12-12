#include <iostream>
using namespace std;

int Merge(int* array1, int* array2, int maxsize)
{
	//�趨�ʼ�ĳ���Ϊ 0��֮���ҵ�һ����ͬ�ľ���ӽ�ȥ 
	int realSize = 0;
	for (int i = 0; i < maxsize; i++)
	{
		int j = 0;
		//�������е����飬�ж��Ƿ����ظ��� 
		for (j = 0; j < realSize; j++)
		{
			if (array1[i] == array2[j])
			{
				break;
			}
		}
		//��ʱ֤�����������������飬�������ظ������ݣ���˽������ 
		if (j == realSize)
		{
			//�������� 
			array2[realSize] = array1[i];
			realSize++;
		}
		//array1�е�һ��Ԫ�ر��ж���� 
	}
	//���������������������ĳ��ȷ��أ�������� 
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

