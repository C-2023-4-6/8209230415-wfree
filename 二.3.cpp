#include<iostream>
using namespace std;
int main() {
	double a = 0;
	cout << "��֪a,b,cΪ�����ε�����" << endl;
	cout << "������a��ֵ" << endl;
	cin >> a;
	double b = 0;
	cout << "������b��ֵ" << endl;
	cin >> b;
	double c = 0;
	cout << "������c��ֵ" << endl;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "�����ε��ܳ�Ϊ" << a + b + c << endl;
	}
	else
	{
		cout << "���������������������" << endl;
	}
	if (a == b)
	{
		cout << "����������ǵ���������" << endl;
	}
	else if (a == c)
	{
		cout << "����������ǵ���������" << endl;
	}
	else if (b == c)
	{
		cout << "����������ǵ���������" << endl;
	}
	else
	{
		cout << "��������β��ǵ���������" << endl;
	}
	return 0;
}