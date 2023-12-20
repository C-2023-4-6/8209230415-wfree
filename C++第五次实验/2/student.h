//student.h                (这是头文件，在此文件中进行类的声明)
#include<iostream>
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value();
	 Student(int num, const char name[20], char sex);
	 Student();
private:
	 int num;
	char name[20];
	char sex;

};
