#include<iostream>
using namespace std;
int main()
{
	bool arr[100] = {};
	for (int i = 0; i < 100; i++)
	{
		arr[i] = 1;
	}//��һ��ѧ��ȫ����
	for (int i = 1; i < 100; i++)//�ڶ���ѧ������һ�ٸ�
	{
		for (int j = i; j < 100; j=j + i + 2)//�ӵ�n�����ӿ�ʼ��ÿ��n�����Ӹı�;//ת��
	
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