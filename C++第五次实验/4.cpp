#include<iostream>
using namespace std;

/*
����һ���������飬�ڷ�5��ѧ���ģ�ѧ�ţ��ɼ�����
����һ������max����ָ������ָ��������������
��max�������ҳ�5��ѧ������߳ɼ��ߣ��������ѧ�š�
*/
class Student
{
public:
	Student();
	Student(int num, int score);
	int getScore();
	int getNum();
	void setScore(int score);
	void setNum(int num);

private:
	int num=0;
	int score=0;
};
Student::Student()
{

}

Student::Student(int num, int score)
{
	this->num = num;
	this->score = score;
}
int Student::getScore()
{
	return this->score;
}
int Student::getNum()
{
	return this->num;
}
void Student::setScore(int score)
{
	this->score = score;

}
void Student::setNum(int num)
{
	this->num = num;

}

void Max(Student student[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (student[j].getScore() < student[j + 1].getScore())
			{
				Student temp =  student[j];
				student[j] = student[j + 1];
				student[j + 1] = temp;
			}
		}
	}
	cout <<"�ɼ����ѧ����ѧ��Ϊ" << student[0].getNum() << endl;
}
int main()
{
	const int len = 5;
	Student student[len] = {};
	for (int i = 0; i < 5; i++)
	{
		student[i].setNum(i);
		int score;
		cout << "������ѧ��" << i << "�ĳɼ�" << endl;
		cin >> score;
		student[i].setScore(score);
	}
	Max(student,len);
}