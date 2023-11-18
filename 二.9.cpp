#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int i = 0;
	for (int a = 2; a <= 100; a = a * 2)
	{
		sum = sum + a;
		i++;
	}
	cout <<"每天平均花" << sum * 0.8 / i <<"元"<< endl;

	return 0;
}