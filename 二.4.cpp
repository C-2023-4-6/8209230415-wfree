
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
        cout << "��������Ϊ0" << endl;
    }
    else {
        return x / y;
    }
}
int yu(int x, int y) {
    if (y == 0) {
        cout << "��������Ϊ0" << endl;
    }
    else {
        return x % y;
    }
}

int main() {
    string operation;

    cout << "�������һ�����֣�";
    int num1;
    cin >> num1;

    cout << "������ڶ������֣�";
    int num2;
    cin >> num2;

    cout << "�������������+��-��*��/��%����";
    cin >> operation;

    if (operation == "+") {
        cout << "�����" << add(num1, num2) << endl;
    }
    else if (operation == "-") {
        cout << "�����" << subtract(num1, num2) << endl;
    }
    else if (operation == "*") {
        cout << "�����" << multiply(num1, num2) << endl;
    }
    else if (operation == "/") {
        cout << "�����" << divide(num1, num2) << endl;
    }
    else if (operation == "%") {
        cout << "�����" << yu (num1, num2) << endl;
    }
    else {
        cout << "�Ƿ������" << endl;
    }

    return 0;
}
