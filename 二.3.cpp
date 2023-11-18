#include<iostream>
using namespace std;
int main() {
	double a = 0;
	cout << "已知a,b,c为三角形的三边" << endl;
	cout << "请输入a的值" << endl;
	cin >> a;
	double b = 0;
	cout << "请输入b的值" << endl;
	cin >> b;
	double c = 0;
	cout << "请输入c的值" << endl;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "三角形的周长为" << a + b + c << endl;
	}
	else
	{
		cout << "这三个数不能组成三角形" << endl;
	}
	if (a == b)
	{
		cout << "这个三角形是等腰三角形" << endl;
	}
	else if (a == c)
	{
		cout << "这个三角形是等腰三角形" << endl;
	}
	else if (b == c)
	{
		cout << "这个三角形是等腰三角形" << endl;
	}
	else
	{
		cout << "这个三角形不是等腰三角形" << endl;
	}
	return 0;
}