#include<iostream>
using namespace std;
int main() 
{
	double total = 0, number = 2,day=0;
	while(number<=100)
	{
		total = number + total;
		number *= 2;
		day++;
	}
	double average = (total) * 0.8 / day++;
	cout << "平均每天花费" << average << endl;
	return 0;
}