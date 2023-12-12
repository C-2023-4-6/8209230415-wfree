#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int size3 = size1 + size2;
	for (int i = 0; i < size3; i++)
	{
		if (i < size1)
		{
			list3[i] = list1[i];
		}
		else
		{
			list3[i] = list2[i - size1];
		}
	}
	for (int i = 0; i < size3-1; i++)
	{
		for (int j = 0; j < size3 - i - 1; j++)
		{
			if (list3[j] > list3[j+1])
			{
				int temp = list3[j];
				list3[j] = list3[j+1];
				list3[j+1] = temp;
			}
		}
	}
	
} 

int main()
{
	cout << "Enter list1:" << " ";
	int size1;
	cin >> size1;
    int *list1=new int[size1];
	
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2:" << " ";
	int size2;
	cin >> size2;
	int* list2 = new int[size2];
	int size3 = size1 + size2;
	int* list3 = new int[size3];
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	 merge( list1,  size1,  list2, size2, list3);
	cout << "The merged list is ";
	for (int i = 0; i < size3; i++)
	{
		cout << list3[i] << " ";
	}
	delete  []list3;
	return 0;
}