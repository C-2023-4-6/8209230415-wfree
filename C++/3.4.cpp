#include <iostream>
using namespace std;
#include"mytriangle.h"
int main()
{
	cout << "请输入三角形的三条边" << endl;
	double a=0; double b=0; double c=0;
	cin >> a; cin >> b; cin >> c;
	
	if (is_valid(a, b, c))
	{
		area(a, b, c);
	}
	
	return 0;
}