#include<iostream>
using namespace std;
int* f()
{

	
	int *list= new int[4];
	for (int i = 0,j=1; i < 4; i++,j++)
	{
		list[i] = j;
	}
	
	return list;
}
void main()
{

	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete p;
	
	
}