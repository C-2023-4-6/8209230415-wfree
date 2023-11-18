#include<iostream>
using namespace std;
int main() {
	char letter = 0;
	cout << "请输入一个字母" << endl;
	cin >> letter;
	if ( letter > 96 && letter <=120 )
	{
        cout << "它的大写字母为" <<(char)toupper(letter)<<endl;
	}
	else
	{
		cout << "该字母的ASCII码值为" << letter+1 << endl;
	}
}