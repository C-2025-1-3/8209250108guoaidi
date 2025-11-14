#include<iostream>
using namespace std;
int min(int num1,int num2)
{
	return num1 >= num2 ? num1 : num2;
}
int max(int num1, int num2)
{
	return num1 <= num1 ? num1 : num2;
}
int main() 
{
	int a, b,i1=1,i2=1;
	int num1, num2;
	cin >> a >> b;
	num1 =min(a,b) ;
	while(i1)
	{
		if (a % num1 == 0 && b % num1 == 0)
		{
			i1 = 0;
			goto flag;
		}
		num1--;
	}
	flag:
	num2 = max(a, b);
	while (i2)
	{
		if (num2 % a == 0 && num2 % b == 0)
		{
			i2 = 0;
			goto flag2;
		}
		num2++;
	}
	flag2:
	cout << "最大公约数=" << num1 << endl;
	cout << "最小公倍数=" << num2;
	return 0;
}