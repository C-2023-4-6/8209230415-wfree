#include"student.h"            //不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout <<"sex：" << sex << endl;
}
void Student::set_value()
{
	num = 1;
	strcpy_s(name, "aaaaa");
	sex = 'n';

}
Student::Student(int num, const char name[20], char sex)
{
	this->num = num;
	strcpy_s(this->name, name);
	this->sex = sex;
}
Student::Student()
{
	Student:set_value();
}
