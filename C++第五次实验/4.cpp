#include<iostream>
using namespace std;

/*
建立一个对象数组，内放5个学生的（学号，成绩），
设立一个函数max，用指向对象的指针作函数参数，
在max函数中找出5个学生的最高成绩者，并输出其学号。
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
	cout <<"成绩最高学生的学号为" << student[0].getNum() << endl;
}
int main()
{
	const int len = 5;
	Student student[len] = {};
	for (int i = 0; i < 5; i++)
	{
		student[i].setNum(i);
		int score;
		cout << "请输入学生" << i << "的成绩" << endl;
		cin >> score;
		student[i].setScore(score);
	}
	Max(student,len);
}