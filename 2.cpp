

#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.141592653589793;
    
    double h = 0;
    double r = 0;
    cout << "请输入圆锥的锥高" << endl;
    cin >> h;
    cout << "请输入圆锥的半径" << endl; 
    cin >> r;
    double V = PI * r * r * h / 3;
    cout << "该圆锥的体积为" << V << endl;
    return 0;
}




