#include<iostream>
using namespace std;
int main() {
	double x = 0;
	cout << "ÇëÊäÈëxµÄÖµ,0<x<10" << endl;
	cin >> x;
	if (x > 0 && x < 1)
	{
		cout << "y=" << 3 - 2*x << endl;
	}
	else if (x >= 1 && x < 5)
	{
		cout << "y=" << 2 / (4 * x) + 1 << endl;
	}
	else if (x>=5 && x < 10)
	{
		cout << "y=" << x * x << endl;
	}
	return 0;
}