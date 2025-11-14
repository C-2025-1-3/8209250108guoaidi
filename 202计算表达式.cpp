#include<iostream>
using namespace std;
int main() {
	double x, y;
	cin >> x;
	if (0 < x && 1 > x)
	{		y = 3 - 2 * x;
		cout << y;
	}
	else if (1 <= x && x < 5) 
	{
		y = 2 / (4 * x) + 1;
		cout << y;
	}
	else if (5 <= x && x < 10)
	{
		y = x * x;
		cout << y;
	}
	else
	{
		cout << "´íÎó";
	}
	return 0;
}