#include<iostream>
using namespace std;
int main() {
	char letter = 0;
	cout << "������һ����ĸ" << endl;
	cin >> letter;
	if ( letter > 96 && letter <=120 )
	{
        cout << "���Ĵ�д��ĸΪ" <<(char)toupper(letter)<<endl;
	}
	else
	{
		cout << "����ĸ��ASCII��ֵΪ" << letter+1 << endl;
	}
}