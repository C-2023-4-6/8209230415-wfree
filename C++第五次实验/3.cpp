#include<iostream>
using namespace std;
class Rectangular
{
public:
	void Input();
	void Volume();
private:
	double length;
	double width;
	double height;
};
void Rectangular:: Input()
{
	cout << "请输入长方柱的长宽高" << endl;
	cin >> length;
	cin >> width;
	cin >> height;
}
void Rectangular::Volume()
{
	double V = 0;
	V = length * width * height;
	cout << "长方柱的体积是" << V << endl;
}
int main()
{
	Rectangular v1;
	v1.Input();
	v1.Volume();
	system("pause");
	return 0;
}