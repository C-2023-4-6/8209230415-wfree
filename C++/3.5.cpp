#include <iostream>
using namespace std;
int main()
{
	int a = 1;
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum = (a + 1) * 2;
		a = sum;
	}
	cout <<"第一天猴子共摘" << sum <<"个桃子";
}