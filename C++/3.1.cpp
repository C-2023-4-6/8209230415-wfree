#include <iostream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}//求最大公约数
int main()
{
	int m;
	int n;
	
	cout << "请输入两个自然数" << endl;
	cin >> m;
	cin >> n;
	cout << "这两个数的最大公约数是";
	cout << gcd(m,n) << endl;
	cout << "这两个数的最小公倍数是" << m * n / gcd(m, n);
}
