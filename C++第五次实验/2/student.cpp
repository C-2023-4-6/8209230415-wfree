#include"student.h"            //��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout <<"sex��" << sex << endl;
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
