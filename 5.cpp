#include<iostream>
using namespace std;
int main() {
	double  F = 0;
	cout << "�����뻪���¶�F" << endl;
	cin >> F;
	cout << "������Ļ����¶�Ϊ" << F << endl;
	double C = (F - 32) / 1.8;
	double rounded_C = round(C * 100) / 100;
	cout << "�û����¶�ת���ɵ������¶�Ϊ" << rounded_C << endl;

}