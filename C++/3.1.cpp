#include <iostream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}//�����Լ��
int main()
{
	int m;
	int n;
	
	cout << "������������Ȼ��" << endl;
	cin >> m;
	cin >> n;
	cout << "�������������Լ����";
	cout << gcd(m,n) << endl;
	cout << "������������С��������" << m * n / gcd(m, n);
}
