#include<iostream>
using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;//1
	cout << "int length:" << sizeof(int) << endl;//4
	cout << "long length:" << sizeof(long) << endl;//4
	cout << "long long length:" << sizeof(long long) << endl;//8
	cout << "signed char length:" << sizeof(signed char) << endl;//1
	cout << "unsigned char length:" << sizeof(unsigned char) << endl;//1
	cout << "bool length:" << sizeof(bool) << endl;//1
	cout << "float length:" << sizeof(float) << endl;//4
	cout << "double length:" << sizeof(double) << endl;//8
}