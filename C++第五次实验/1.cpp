#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	void Print();
	
};
void Time::Print()
{
	cout << "���������ڵ�ʱ��" << endl;
	cin >> hour;      //�����趨��ʱ�� 
	cin >> minute;
	cin >> sec;
	cout << hour << ":" << minute << ":" << sec << endl;
}
int main()
{
	Time t1;//����t1ΪTime�����
	t1.Print();
	return 0;
}