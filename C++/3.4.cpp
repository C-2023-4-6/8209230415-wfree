#include <iostream>
using namespace std;
#include"mytriangle.h"
int main()
{
	cout << "�����������ε�������" << endl;
	double a=0; double b=0; double c=0;
	cin >> a; cin >> b; cin >> c;
	
	if (is_valid(a, b, c))
	{
		area(a, b, c);
	}
	
	return 0;
}