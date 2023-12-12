#include <iostream>
using namespace std;
bool is_prime(int num)
{
	for (int i = 2; i < num; i++) 
	{
		if (num % i == 0)
		{
			return 0;
			break;
		}
		
	}
	return 1;
}
int main()
{
	int sum=0;
	int t = 0;
	for (int a = 2;;a++)
	{
		
		if (is_prime(a))
		{
			cout << a << "\t";
			sum++;
			t++;
			if (t % 10 == 0)
			{
				cout << "\n";
			}
		}
		
		if (sum >= 200)
		{
			break;
		}
	}
}