
#include <iostream>  
#include <string>
using namespace std;


int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    if (y == 0) {
        cout << "除数不能为0" << endl;
    }
    else {
        return x / y;
    }
}
int yu(int x, int y) {
    if (y == 0) {
        cout << "除数不能为0" << endl;
    }
    else {
        return x % y;
    }
}

int main() {
    string operation;

    cout << "请输入第一个数字：";
    int num1;
    cin >> num1;

    cout << "请输入第二个数字：";
    int num2;
    cin >> num2;

    cout << "请输入运算符（+、-、*、/、%）：";
    cin >> operation;

    if (operation == "+") {
        cout << "结果：" << add(num1, num2) << endl;
    }
    else if (operation == "-") {
        cout << "结果：" << subtract(num1, num2) << endl;
    }
    else if (operation == "*") {
        cout << "结果：" << multiply(num1, num2) << endl;
    }
    else if (operation == "/") {
        cout << "结果：" << divide(num1, num2) << endl;
    }
    else if (operation == "%") {
        cout << "结果：" << yu (num1, num2) << endl;
    }
    else {
        cout << "非法运算符" << endl;
    }

    return 0;
}
