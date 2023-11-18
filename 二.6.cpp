#include<iostream>
using namespace std;
int gcd(int a, int b){
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}//求最大公约数
int main()
{
	int a = 0;
	int b = 0;
	cout << "请输入两个整数" << endl;
	cin >> a;
	cin >> b;
	int g = gcd(a, b);
	cout << "这两个整数的最大公约数为" << g << endl;
	int l = a * b / g;//最小公倍数是两个整数的乘积除以他们的最大公约数
	cout << "这两个整数的最小公倍数为" << l << endl;
	
	return 0;
	
}