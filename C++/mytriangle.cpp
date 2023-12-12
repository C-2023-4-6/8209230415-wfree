#include"mytriangle.h"
bool is_valid(double side1, double side2, double side3 ) 

{
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
	{
		return 1;
	}
	else {
		cout << "无法组成三角形" << endl;
		return 0;
		
	}
	
}
 double area (double side1, double side2, double side3)
{
	 double s = (side1 + side2 + side3) / 2;
	 double ss= sqrt(s * (s - side1) * (s - side2) * (s - side3));
	 cout <<"该三角形的面积是" << ss << endl;
	 return ss;
}