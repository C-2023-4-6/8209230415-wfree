#include <iostream>
using namespace std;
int kaifang(float a, float k) {
    float i;
    i = 0.5 * (k + a / k);
    if (i - k<1e-5 && i - k>-1e-5)
    {
        cout << "算术平方根为" << i << endl;
    }
    else {
        kaifang(a, i);
    }
    return i;
}

int main()
{
    float  a;
    cout << "请输入数据" << endl;
    cin >> a;
    if (a < 0) { cout << "该数据没有平方根" << endl; }
    if (a == 0) { cout << "该数据 平方根为0：" << endl; }
    kaifang(a, a);

    return 0;
}
