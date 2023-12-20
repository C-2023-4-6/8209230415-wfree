#include<iostream>
using namespace std;

/*
* 
* ����һ������������Point����˽�б���x��y����һ�����(x,y)����ֵ��
���д����ʵ�����¹��ܣ����ù��캯�����ݲ������ڶ������ʱ��x��y����ֵ��ʼ��Ϊ��60,80����
���ù��г�Ա����void setPoint(int i, int j)������ֵ�޸�Ϊ(60+i,80+j)��
���ù��г�Ա����display()����޸ĺ������ֵ����������ͨ�����������֤����������
*/

class Point
{
private:
	int x;
	int y;
public:
	void setPoint(int i, int j);
	void display();
	Point(int x = 60,int y = 80)
	{
		this->x = x;
		this->y = y;
	}
};

void Point::setPoint(int i, int j)
{
	this->x += i;
	this->y += j;
}

void Point::display()
{
	cout << "("<< this->x<<","<<this->y<<")";
	cout << endl;
}

int main()
{

	Point point;
	point.setPoint(4, 5);
	point.display();

	Point* point2 = new Point();
	point2->display();
	delete point2;
	return 0;
}
