//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
#include<iostream>
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value();
	 Student(int num, const char name[20], char sex);
	 Student();
private:
	 int num;
	char name[20];
	char sex;

};
